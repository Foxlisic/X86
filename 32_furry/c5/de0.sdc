# Создаем описание частоты для входного пина
create_clock -name clk_50 -period 20.000 [get_ports {CLOCK_50}]

# Автоматически вычисляем частоты для всех выходов PLL
derive_pll_clocks

# Вычисляем погрешности (jitter и т.д.)
derive_clock_uncertainty

# Не пытаться вычислить межклоковые взаимодействия
set_clock_groups -asynchronous \
                 -group [get_clocks {u0|altera_pll_i|general[0].gpll~PLL_OUTPUT_COUNTER|divclk}] \
                 -group [get_clocks {u0|altera_pll_i|general[1].gpll~PLL_OUTPUT_COUNTER|divclk}] \
                 -group [get_clocks {u0|altera_pll_i|general[2].gpll~PLL_OUTPUT_COUNTER|divclk}]
