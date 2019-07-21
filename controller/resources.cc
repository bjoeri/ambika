// Copyright 2009 Emilie Gillet.
//
// Author: Emilie Gillet (emilie.o.gillet@gmail.com)
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.
//
// -----------------------------------------------------------------------------
//
// Resources definitions.
//
// Automatically generated with:
// make resources


#include "controller/resources.h"

namespace ambika {

static const prog_char str_res_waveform[] PROGMEM = "waveform";
static const prog_char str_res_parameter[] PROGMEM = "parameter";
static const prog_char str_res_range[] PROGMEM = "range";
static const prog_char str_res_tune[] PROGMEM = "tune";
static const prog_char str_res_osc_mix[] PROGMEM = "osc mix";
static const prog_char str_res_sub_osc_[] PROGMEM = "sub osc.";
static const prog_char str_res_crossmod_[] PROGMEM = "crossmod.";
static const prog_char str_res_operator[] PROGMEM = "operator";
static const prog_char str_res_amount[] PROGMEM = "amount";
static const prog_char str_res_resonance[] PROGMEM = "resonance";
static const prog_char str_res_mode[] PROGMEM = "mode";
static const prog_char str_res_env2Tvcf[] PROGMEM = "env2~vcf";
static const prog_char str_res_lfo2Tvcf[] PROGMEM = "lfo2~vcf";
static const prog_char str_res_veloTvcf[] PROGMEM = "velo~vcf";
static const prog_char str_res_keybTvcf[] PROGMEM = "keyb~vcf";
static const prog_char str_res_attack[] PROGMEM = "attack";
static const prog_char str_res_decay[] PROGMEM = "decay";
static const prog_char str_res_sustain[] PROGMEM = "sustain";
static const prog_char str_res_release[] PROGMEM = "release";
static const prog_char str_res_trigger[] PROGMEM = "trigger";
static const prog_char str_res_rate[] PROGMEM = "rate";
static const prog_char str_res_lfo_eg[] PROGMEM = "lfo/eg";
static const prog_char str_res_voice_lfo[] PROGMEM = "voice lfo";
static const prog_char str_res_source[] PROGMEM = "source";
static const prog_char str_res_destination[] PROGMEM = "destination";
static const prog_char str_res_in1[] PROGMEM = "in1";
static const prog_char str_res_in2[] PROGMEM = "in2";
static const prog_char str_res_modulation[] PROGMEM = "modulation";
static const prog_char str_res_modul_[] PROGMEM = "modul.";
static const prog_char str_res_modifier[] PROGMEM = "modifier";
static const prog_char str_res_modif_[] PROGMEM = "modif.";
static const prog_char str_res_volume[] PROGMEM = "volume";
static const prog_char str_res_octave[] PROGMEM = "octave";
static const prog_char str_res_spread[] PROGMEM = "spread";
static const prog_char str_res_legato[] PROGMEM = "legato";
static const prog_char str_res_portamento[] PROGMEM = "portamento";
static const prog_char str_res_arp_seq[] PROGMEM = "arp/seq";
static const prog_char str_res_raga[] PROGMEM = "raga";
static const prog_char str_res_direction[] PROGMEM = "direction";
static const prog_char str_res_pattern[] PROGMEM = "pattern";
static const prog_char str_res_channel[] PROGMEM = "channel";
static const prog_char str_res_part[] PROGMEM = "part";
static const prog_char str_res_bpm[] PROGMEM = "bpm";
static const prog_char str_res_ltch[] PROGMEM = "ltch";
static const prog_char str_res_latch[] PROGMEM = "latch";
static const prog_char str_res_low[] PROGMEM = "low";
static const prog_char str_res_high[] PROGMEM = "high";
static const prog_char str_res_grid[] PROGMEM = "grid";
static const prog_char str_res_seq1_len[] PROGMEM = "seq1 len";
static const prog_char str_res_seq2_len[] PROGMEM = "seq2 len";
static const prog_char str_res_patt_len[] PROGMEM = "patt len";
static const prog_char str_res_len1[] PROGMEM = "len1";
static const prog_char str_res_len2[] PROGMEM = "len2";
static const prog_char str_res_lenp[] PROGMEM = "lenp";
static const prog_char str_res_groove[] PROGMEM = "groove";
static const prog_char str_res_midi[] PROGMEM = "midi";
static const prog_char str_res_snap[] PROGMEM = "snap";
static const prog_char str_res_help[] PROGMEM = "help";
static const prog_char str_res_auto_backup[] PROGMEM = "auto backup";
static const prog_char str_res_leds[] PROGMEM = "leds";
static const prog_char str_res_card_leds[] PROGMEM = "card leds";
static const prog_char str_res_swap_colors[] PROGMEM = "swap colors";
static const prog_char str_res_inpt_filter[] PROGMEM = "inpt filter";
static const prog_char str_res_outp_mode[] PROGMEM = "outp mode";
static const prog_char str_res_ext[] PROGMEM = "ext";
static const prog_char str_res_omni[] PROGMEM = "omni";
static const prog_char str_res_amnt[] PROGMEM = "amnt";
static const prog_char str_res_srce[] PROGMEM = "srce";
static const prog_char str_res_oct[] PROGMEM = "oct";
static const prog_char str_res_sprd[] PROGMEM = "sprd";
static const prog_char str_res_a_sq[] PROGMEM = "a/sq";
static const prog_char str_res_octv[] PROGMEM = "octv";
static const prog_char str_res_off[] PROGMEM = "off";
static const prog_char str_res_on[] PROGMEM = "on";
static const prog_char str_res_none[] PROGMEM = "none";
static const prog_char str_res_saw[] PROGMEM = "saw";
static const prog_char str_res_square[] PROGMEM = "square";
static const prog_char str_res_triangle[] PROGMEM = "triangle";
static const prog_char str_res_sine[] PROGMEM = "sine";
static const prog_char str_res_zsaw[] PROGMEM = "zsaw";
static const prog_char str_res_lpzsaw[] PROGMEM = "lpzsaw";
static const prog_char str_res_pkzsaw[] PROGMEM = "pkzsaw";
static const prog_char str_res_bpzsaw[] PROGMEM = "bpzsaw";
static const prog_char str_res_hpzsaw[] PROGMEM = "hpzsaw";
static const prog_char str_res_lpzpulse[] PROGMEM = "lpzpulse";
static const prog_char str_res_pkzpulse[] PROGMEM = "pkzpulse";
static const prog_char str_res_bpzpulse[] PROGMEM = "bpzpulse";
static const prog_char str_res_hpzpulse[] PROGMEM = "hpzpulse";
static const prog_char str_res_ztriangle[] PROGMEM = "ztriangle";
static const prog_char str_res_pad[] PROGMEM = "pad";
static const prog_char str_res_fm[] PROGMEM = "fm";
static const prog_char str_res_8bits[] PROGMEM = "8bits";
static const prog_char str_res_pwm[] PROGMEM = "pwm";
static const prog_char str_res_noise[] PROGMEM = "noise";
static const prog_char str_res_vowel[] PROGMEM = "vowel";
static const prog_char str_res_male[] PROGMEM = "male";
static const prog_char str_res_female[] PROGMEM = "female";
static const prog_char str_res_choir[] PROGMEM = "choir";
static const prog_char str_res_tampura[] PROGMEM = "tampura";
static const prog_char str_res_bowed[] PROGMEM = "bowed";
static const prog_char str_res_cello[] PROGMEM = "cello";
static const prog_char str_res_vibes[] PROGMEM = "vibes";
static const prog_char str_res_slap[] PROGMEM = "slap";
static const prog_char str_res_epiano[] PROGMEM = "epiano";
static const prog_char str_res_organ[] PROGMEM = "organ";
static const prog_char str_res_waves[] PROGMEM = "waves";
static const prog_char str_res_digital[] PROGMEM = "digital";
static const prog_char str_res_drone_1[] PROGMEM = "drone 1";
static const prog_char str_res_drone_2[] PROGMEM = "drone 2";
static const prog_char str_res_metallic[] PROGMEM = "metallic";
static const prog_char str_res_bell[] PROGMEM = "bell";
static const prog_char str_res_wavquence[] PROGMEM = "wavquence";
static const prog_char str_res_oldsaw[] PROGMEM = "oldsaw";
static const prog_char str_res_qpwm[] PROGMEM = "qpwm";
static const prog_char str_res_fmfb[] PROGMEM = "fmfb";
static const prog_char str_res_csaw[] PROGMEM = "csaw";
static const prog_char str_res_vowel_2[] PROGMEM = "vowel 2";
static const prog_char str_res_tri[] PROGMEM = "tri";
static const prog_char str_res_sqr[] PROGMEM = "sqr";
static const prog_char str_res_s_h[] PROGMEM = "s&h";
static const prog_char str_res_ramp[] PROGMEM = "ramp";
static const prog_char str_res_hrm2[] PROGMEM = "hrm2";
static const prog_char str_res_hrm3[] PROGMEM = "hrm3";
static const prog_char str_res_hrm5[] PROGMEM = "hrm5";
static const prog_char str_res_grg1[] PROGMEM = "grg1";
static const prog_char str_res_grg2[] PROGMEM = "grg2";
static const prog_char str_res_bat1[] PROGMEM = "bat1";
static const prog_char str_res_bat2[] PROGMEM = "bat2";
static const prog_char str_res_spk1[] PROGMEM = "spk1";
static const prog_char str_res_spk2[] PROGMEM = "spk2";
static const prog_char str_res_lsaw[] PROGMEM = "lsaw";
static const prog_char str_res_lsqr[] PROGMEM = "lsqr";
static const prog_char str_res_rsaw[] PROGMEM = "rsaw";
static const prog_char str_res_rsqr[] PROGMEM = "rsqr";
static const prog_char str_res_stp1[] PROGMEM = "stp1";
static const prog_char str_res_stp2[] PROGMEM = "stp2";
static const prog_char str_res_sync[] PROGMEM = "sync";
static const prog_char str_res_ringmod[] PROGMEM = "ringmod";
static const prog_char str_res_xor[] PROGMEM = "xor";
static const prog_char str_res_fold[] PROGMEM = "fold";
static const prog_char str_res_bits[] PROGMEM = "bits";
static const prog_char str_res_squ1[] PROGMEM = "squ1";
static const prog_char str_res_tri1[] PROGMEM = "tri1";
static const prog_char str_res_pul1[] PROGMEM = "pul1";
static const prog_char str_res_squ2[] PROGMEM = "squ2";
static const prog_char str_res_tri2[] PROGMEM = "tri2";
static const prog_char str_res_pul2[] PROGMEM = "pul2";
static const prog_char str_res_click[] PROGMEM = "click";
static const prog_char str_res_glitch[] PROGMEM = "glitch";
static const prog_char str_res_blow[] PROGMEM = "blow";
static const prog_char str_res_metal[] PROGMEM = "metal";
static const prog_char str_res_pop[] PROGMEM = "pop";
static const prog_char str_res_env1[] PROGMEM = "env1";
static const prog_char str_res_env2[] PROGMEM = "env2";
static const prog_char str_res_env3[] PROGMEM = "env3";
static const prog_char str_res_lfo1[] PROGMEM = "lfo1";
static const prog_char str_res_lfo2[] PROGMEM = "lfo2";
static const prog_char str_res_lfo3[] PROGMEM = "lfo3";
static const prog_char str_res_lfo4[] PROGMEM = "lfo4";
static const prog_char str_res_mod1[] PROGMEM = "mod1";
static const prog_char str_res_mod2[] PROGMEM = "mod2";
static const prog_char str_res_mod3[] PROGMEM = "mod3";
static const prog_char str_res_mod4[] PROGMEM = "mod4";
static const prog_char str_res_seq1[] PROGMEM = "seq1";
static const prog_char str_res_seq2[] PROGMEM = "seq2";
static const prog_char str_res_arp[] PROGMEM = "arp";
static const prog_char str_res_velo[] PROGMEM = "velo";
static const prog_char str_res_aftr[] PROGMEM = "aftr";
static const prog_char str_res_bend[] PROGMEM = "bend";
static const prog_char str_res_mwhl[] PROGMEM = "mwhl";
static const prog_char str_res_whl2[] PROGMEM = "whl2";
static const prog_char str_res_pdal[] PROGMEM = "pdal";
static const prog_char str_res_note[] PROGMEM = "note";
static const prog_char str_res_gate[] PROGMEM = "gate";
static const prog_char str_res_nois[] PROGMEM = "nois";
static const prog_char str_res_rand[] PROGMEM = "rand";
static const prog_char str_res_e256[] PROGMEM = "=256";
static const prog_char str_res_e128[] PROGMEM = "=128";
static const prog_char str_res_e64[] PROGMEM = "=64";
static const prog_char str_res_e32[] PROGMEM = "=32";
static const prog_char str_res_e16[] PROGMEM = "=16";
static const prog_char str_res_e8[] PROGMEM = "=8";
static const prog_char str_res_e4[] PROGMEM = "=4";
static const prog_char str_res_prm1[] PROGMEM = "prm1";
static const prog_char str_res_prm2[] PROGMEM = "prm2";
static const prog_char str_res_osc1[] PROGMEM = "osc1";
static const prog_char str_res_osc2[] PROGMEM = "osc2";
static const prog_char str_res_31S2[] PROGMEM = "1+2";
static const prog_char str_res_vibr[] PROGMEM = "vibr";
static const prog_char str_res_mix[] PROGMEM = "mix";
static const prog_char str_res_xmod[] PROGMEM = "xmod";
static const prog_char str_res_sub[] PROGMEM = "sub";
static const prog_char str_res_fuzz[] PROGMEM = "fuzz";
static const prog_char str_res_crsh[] PROGMEM = "crsh";
static const prog_char str_res_freq[] PROGMEM = "freq";
static const prog_char str_res_reso[] PROGMEM = "reso";
static const prog_char str_res_attk[] PROGMEM = "attk";
static const prog_char str_res_deca[] PROGMEM = "deca";
static const prog_char str_res_rele[] PROGMEM = "rele";
static const prog_char str_res_vca[] PROGMEM = "vca";
static const prog_char str_res_env_1[] PROGMEM = "env 1";
static const prog_char str_res_env_2[] PROGMEM = "env 2";
static const prog_char str_res_env_3[] PROGMEM = "env 3";
static const prog_char str_res_lfo_1[] PROGMEM = "lfo 1";
static const prog_char str_res_lfo_2[] PROGMEM = "lfo 2";
static const prog_char str_res_lfo_3[] PROGMEM = "lfo 3";
static const prog_char str_res_lfo_4[] PROGMEM = "lfo 4";
static const prog_char str_res_mod__1[] PROGMEM = "mod. 1";
static const prog_char str_res_mod__2[] PROGMEM = "mod. 2";
static const prog_char str_res_mod__3[] PROGMEM = "mod. 3";
static const prog_char str_res_mod__4[] PROGMEM = "mod. 4";
static const prog_char str_res_seq__1[] PROGMEM = "seq. 1";
static const prog_char str_res_seq__2[] PROGMEM = "seq. 2";
static const prog_char str_res_afttch[] PROGMEM = "afttch";
static const prog_char str_res_bender[] PROGMEM = "bender";
static const prog_char str_res_mwheel[] PROGMEM = "mwheel";
static const prog_char str_res_wheel2[] PROGMEM = "wheel2";
static const prog_char str_res_pedal[] PROGMEM = "pedal";
static const prog_char str_res_random[] PROGMEM = "random";
static const prog_char str_res_e_256[] PROGMEM = "= 256";
static const prog_char str_res_e_32[] PROGMEM = "= 32";
static const prog_char str_res_e_16[] PROGMEM = "= 16";
static const prog_char str_res_e_8[] PROGMEM = "= 8";
static const prog_char str_res_e_4[] PROGMEM = "= 4";
static const prog_char str_res_param_1[] PROGMEM = "param 1";
static const prog_char str_res_param_2[] PROGMEM = "param 2";
static const prog_char str_res_osc_1[] PROGMEM = "osc 1";
static const prog_char str_res_osc_2[] PROGMEM = "osc 2";
static const prog_char str_res_osc_1S2[] PROGMEM = "osc 1+2";
static const prog_char str_res_vibrato[] PROGMEM = "vibrato";
static const prog_char str_res_subosc[] PROGMEM = "subosc";
static const prog_char str_res_crush[] PROGMEM = "crush";
static const prog_char str_res_frequency[] PROGMEM = "frequency";
static const prog_char str_res_lp[] PROGMEM = "lp";
static const prog_char str_res_bp[] PROGMEM = "bp";
static const prog_char str_res_hp[] PROGMEM = "hp";
static const prog_char str_res_nt[] PROGMEM = "nt";
static const prog_char str_res_free[] PROGMEM = "free";
static const prog_char str_res_envTlfo[] PROGMEM = "env~lfo";
static const prog_char str_res_lfoTenv[] PROGMEM = "lfo~env";
static const prog_char str_res_step_seq[] PROGMEM = "step seq";
static const prog_char str_res_arpeggio[] PROGMEM = "arpeggio";
static const prog_char str_res_add[] PROGMEM = "add";
static const prog_char str_res_prod[] PROGMEM = "prod";
static const prog_char str_res_attn[] PROGMEM = "attn";
static const prog_char str_res_max[] PROGMEM = "max";
static const prog_char str_res_min[] PROGMEM = "min";
static const prog_char str_res_ge[] PROGMEM = ">=";
static const prog_char str_res_le[] PROGMEM = "<=";
static const prog_char str_res_qtz[] PROGMEM = "qtz";
static const prog_char str_res_lag[] PROGMEM = "lag";
static const prog_char str_res_mono[] PROGMEM = "mono";
static const prog_char str_res_poly[] PROGMEM = "poly";
static const prog_char str_res_2x_unison[] PROGMEM = "2x unison";
static const prog_char str_res_cyclic[] PROGMEM = "cyclic";
static const prog_char str_res_chain[] PROGMEM = "chain";
static const prog_char str_res_up[] PROGMEM = "up";
static const prog_char str_res_down[] PROGMEM = "down";
static const prog_char str_res_up_down[] PROGMEM = "up&down";
static const prog_char str_res_played[] PROGMEM = "played";
static const prog_char str_res_chord[] PROGMEM = "chord";
static const prog_char str_res_1_1[] PROGMEM = "1/1";
static const prog_char str_res_3_4[] PROGMEM = "3/4";
static const prog_char str_res_2_3[] PROGMEM = "2/3";
static const prog_char str_res_1_2[] PROGMEM = "1/2";
static const prog_char str_res_3_8[] PROGMEM = "3/8";
static const prog_char str_res_1_3[] PROGMEM = "1/3";
static const prog_char str_res_1_4[] PROGMEM = "1/4";
static const prog_char str_res_1_6[] PROGMEM = "1/6";
static const prog_char str_res_1_8[] PROGMEM = "1/8";
static const prog_char str_res_1_12[] PROGMEM = "1/12";
static const prog_char str_res_1_16[] PROGMEM = "1/16";
static const prog_char str_res_1_24[] PROGMEM = "1/24";
static const prog_char str_res_1_32[] PROGMEM = "1/32";
static const prog_char str_res_1_48[] PROGMEM = "1/48";
static const prog_char str_res_1_96[] PROGMEM = "1/96";
static const prog_char str_res_thru[] PROGMEM = "thru";
static const prog_char str_res_sequencer[] PROGMEM = "sequencer";
static const prog_char str_res_controllr[] PROGMEM = "controllr";
static const prog_char str_res_full[] PROGMEM = "full";
static const prog_char str_res_____[] PROGMEM = "....";
static const prog_char str_res____s[] PROGMEM = "...s";
static const prog_char str_res___p_[] PROGMEM = "..p.";
static const prog_char str_res___ps[] PROGMEM = "..ps";
static const prog_char str_res__n__[] PROGMEM = ".n..";
static const prog_char str_res__n_s[] PROGMEM = ".n.s";
static const prog_char str_res__np_[] PROGMEM = ".np.";
static const prog_char str_res__nps[] PROGMEM = ".nps";
static const prog_char str_res_c___[] PROGMEM = "c...";
static const prog_char str_res_c__s[] PROGMEM = "c..s";
static const prog_char str_res_c_p_[] PROGMEM = "c.p.";
static const prog_char str_res_c_ps[] PROGMEM = "c.ps";
static const prog_char str_res_cn__[] PROGMEM = "cn..";
static const prog_char str_res_cn_s[] PROGMEM = "cn.s";
static const prog_char str_res_cnp_[] PROGMEM = "cnp.";
static const prog_char str_res_cnps[] PROGMEM = "cnps";
static const prog_char str_res_swing[] PROGMEM = "swing";
static const prog_char str_res_shuffle[] PROGMEM = "shuffle";
static const prog_char str_res_push[] PROGMEM = "push";
static const prog_char str_res_human[] PROGMEM = "human";
static const prog_char str_res_monkey[] PROGMEM = "monkey";
static const prog_char str_res_oscillator_1[] PROGMEM = "oscillator 1";
static const prog_char str_res_oscillator_2[] PROGMEM = "oscillator 2";
static const prog_char str_res_mixer[] PROGMEM = "mixer";
static const prog_char str_res_lfo[] PROGMEM = "lfo";
static const prog_char str_res_filter_1[] PROGMEM = "filter 1";
static const prog_char str_res_filter_2[] PROGMEM = "filter 2";
static const prog_char str_res_envelope[] PROGMEM = "envelope";
static const prog_char str_res_arpeggiator[] PROGMEM = "arpeggiator";
static const prog_char str_res_multi[] PROGMEM = "multi";
static const prog_char str_res_clock[] PROGMEM = "clock";
static const prog_char str_res_performance[] PROGMEM = "performance";
static const prog_char str_res_system[] PROGMEM = "system";
static const prog_char str_res_pt_x_patch[] PROGMEM = "pt X patch";
static const prog_char str_res_pt_x_sequence[] PROGMEM = "pt X sequence";
static const prog_char str_res_pt_x_program[] PROGMEM = "pt X program";
static const prog_char str_res_randomize[] PROGMEM = "randomize";
static const prog_char str_res_init[] PROGMEM = "init";
static const prog_char str_res_patch[] PROGMEM = "PATCH";
static const prog_char str_res_sequence[] PROGMEM = "SEQUENCE";
static const prog_char str_res_program[] PROGMEM = "PROGRAM";
static const prog_char str_res__multi[] PROGMEM = "MULTI";
static const prog_char str_res____[] PROGMEM = "___";
static const prog_char str_res_equal[] PROGMEM = "equal";
static const prog_char str_res_just[] PROGMEM = "just";
static const prog_char str_res_pythagorean[] PROGMEM = "pythagorean";
static const prog_char str_res_1_4_eb[] PROGMEM = "1/4 eb";
static const prog_char str_res_1_4_e[] PROGMEM = "1/4 e";
static const prog_char str_res_1_4_ea[] PROGMEM = "1/4 ea";
static const prog_char str_res_bhairav[] PROGMEM = "bhairav";
static const prog_char str_res_gunakri[] PROGMEM = "gunakri";
static const prog_char str_res_marwa[] PROGMEM = "marwa";
static const prog_char str_res_shree[] PROGMEM = "shree";
static const prog_char str_res_purvi[] PROGMEM = "purvi";
static const prog_char str_res_bilawal[] PROGMEM = "bilawal";
static const prog_char str_res_yaman[] PROGMEM = "yaman";
static const prog_char str_res_kafi[] PROGMEM = "kafi";
static const prog_char str_res_bhimpalasree[] PROGMEM = "bhimpalasree";
static const prog_char str_res_darbari[] PROGMEM = "darbari";
static const prog_char str_res_bageshree[] PROGMEM = "bageshree";
static const prog_char str_res_rageshree[] PROGMEM = "rageshree";
static const prog_char str_res_khamaj[] PROGMEM = "khamaj";
static const prog_char str_res_mimal[] PROGMEM = "mi'mal";
static const prog_char str_res_parameshwari[] PROGMEM = "parameshwari";
static const prog_char str_res_rangeshwari[] PROGMEM = "rangeshwari";
static const prog_char str_res_gangeshwari[] PROGMEM = "gangeshwari";
static const prog_char str_res_kameshwari[] PROGMEM = "kameshwari";
static const prog_char str_res_pa__kafi[] PROGMEM = "pa. kafi";
static const prog_char str_res_natbhairav[] PROGMEM = "natbhairav";
static const prog_char str_res_m_kauns[] PROGMEM = "m.kauns";
static const prog_char str_res_bairagi[] PROGMEM = "bairagi";
static const prog_char str_res_b_todi[] PROGMEM = "b.todi";
static const prog_char str_res_chandradeep[] PROGMEM = "chandradeep";
static const prog_char str_res_kaushik_todi[] PROGMEM = "kaushik todi";
static const prog_char str_res_jogeshwari[] PROGMEM = "jogeshwari";
static const prog_char str_res_rasia[] PROGMEM = "rasia";


PROGMEM const prog_char* const string_table[] = {
  str_res_waveform,
  str_res_parameter,
  str_res_range,
  str_res_tune,
  str_res_osc_mix,
  str_res_sub_osc_,
  str_res_crossmod_,
  str_res_operator,
  str_res_amount,
  str_res_resonance,
  str_res_mode,
  str_res_env2Tvcf,
  str_res_lfo2Tvcf,
  str_res_veloTvcf,
  str_res_keybTvcf,
  str_res_attack,
  str_res_decay,
  str_res_sustain,
  str_res_release,
  str_res_trigger,
  str_res_rate,
  str_res_lfo_eg,
  str_res_voice_lfo,
  str_res_source,
  str_res_destination,
  str_res_in1,
  str_res_in2,
  str_res_modulation,
  str_res_modul_,
  str_res_modulation,
  str_res_modifier,
  str_res_modif_,
  str_res_volume,
  str_res_octave,
  str_res_spread,
  str_res_legato,
  str_res_portamento,
  str_res_arp_seq,
  str_res_raga,
  str_res_direction,
  str_res_pattern,
  str_res_channel,
  str_res_part,
  str_res_bpm,
  str_res_ltch,
  str_res_latch,
  str_res_low,
  str_res_high,
  str_res_grid,
  str_res_seq1_len,
  str_res_seq2_len,
  str_res_patt_len,
  str_res_len1,
  str_res_len2,
  str_res_lenp,
  str_res_groove,
  str_res_midi,
  str_res_snap,
  str_res_help,
  str_res_auto_backup,
  str_res_leds,
  str_res_card_leds,
  str_res_swap_colors,
  str_res_inpt_filter,
  str_res_outp_mode,
  str_res_ext,
  str_res_omni,
  str_res_amnt,
  str_res_srce,
  str_res_oct,
  str_res_sprd,
  str_res_a_sq,
  str_res_octv,
  str_res_off,
  str_res_on,
  str_res_none,
  str_res_saw,
  str_res_square,
  str_res_triangle,
  str_res_sine,
  str_res_zsaw,
  str_res_lpzsaw,
  str_res_pkzsaw,
  str_res_bpzsaw,
  str_res_hpzsaw,
  str_res_lpzpulse,
  str_res_pkzpulse,
  str_res_bpzpulse,
  str_res_hpzpulse,
  str_res_ztriangle,
  str_res_pad,
  str_res_fm,
  str_res_8bits,
  str_res_pwm,
  str_res_noise,
  str_res_vowel,
  str_res_male,
  str_res_female,
  str_res_choir,
  str_res_tampura,
  str_res_bowed,
  str_res_cello,
  str_res_vibes,
  str_res_slap,
  str_res_epiano,
  str_res_organ,
  str_res_waves,
  str_res_digital,
  str_res_drone_1,
  str_res_drone_2,
  str_res_metallic,
  str_res_bell,
  str_res_wavquence,
  str_res_oldsaw,
  str_res_qpwm,
  str_res_fmfb,
  str_res_csaw,
  str_res_vowel_2,
  str_res_tri,
  str_res_sqr,
  str_res_s_h,
  str_res_ramp,
  str_res_sine,
  str_res_hrm2,
  str_res_hrm3,
  str_res_hrm5,
  str_res_grg1,
  str_res_grg2,
  str_res_bat1,
  str_res_bat2,
  str_res_spk1,
  str_res_spk2,
  str_res_lsaw,
  str_res_lsqr,
  str_res_rsaw,
  str_res_rsqr,
  str_res_stp1,
  str_res_stp2,
  str_res_off,
  str_res_sync,
  str_res_ringmod,
  str_res_xor,
  str_res_fold,
  str_res_bits,
  str_res_squ1,
  str_res_tri1,
  str_res_pul1,
  str_res_squ2,
  str_res_tri2,
  str_res_pul2,
  str_res_click,
  str_res_glitch,
  str_res_blow,
  str_res_metal,
  str_res_pop,
  str_res_env1,
  str_res_env2,
  str_res_env3,
  str_res_lfo1,
  str_res_lfo2,
  str_res_lfo3,
  str_res_lfo4,
  str_res_mod1,
  str_res_mod2,
  str_res_mod3,
  str_res_mod4,
  str_res_seq1,
  str_res_seq2,
  str_res_arp,
  str_res_velo,
  str_res_aftr,
  str_res_bend,
  str_res_mwhl,
  str_res_whl2,
  str_res_pdal,
  str_res_note,
  str_res_gate,
  str_res_nois,
  str_res_rand,
  str_res_e256,
  str_res_e128,
  str_res_e64,
  str_res_e32,
  str_res_e16,
  str_res_e8,
  str_res_e4,
  str_res_prm1,
  str_res_prm2,
  str_res_osc1,
  str_res_osc2,
  str_res_31S2,
  str_res_vibr,
  str_res_mix,
  str_res_xmod,
  str_res_nois,
  str_res_sub,
  str_res_fuzz,
  str_res_crsh,
  str_res_freq,
  str_res_reso,
  str_res_attk,
  str_res_deca,
  str_res_rele,
  str_res_lfo4,
  str_res_vca,
  str_res_env_1,
  str_res_env_2,
  str_res_env_3,
  str_res_lfo_1,
  str_res_lfo_2,
  str_res_lfo_3,
  str_res_lfo_4,
  str_res_mod__1,
  str_res_mod__2,
  str_res_mod__3,
  str_res_mod__4,
  str_res_seq__1,
  str_res_seq__2,
  str_res_arp,
  str_res_velo,
  str_res_afttch,
  str_res_bender,
  str_res_mwheel,
  str_res_wheel2,
  str_res_pedal,
  str_res_note,
  str_res_gate,
  str_res_noise,
  str_res_random,
  str_res_e_256,
  str_res_e_32,
  str_res_e_16,
  str_res_e_8,
  str_res_e_4,
  str_res_param_1,
  str_res_param_2,
  str_res_osc_1,
  str_res_osc_2,
  str_res_osc_1S2,
  str_res_vibrato,
  str_res_mix,
  str_res_xmod,
  str_res_noise,
  str_res_subosc,
  str_res_fuzz,
  str_res_crush,
  str_res_frequency,
  str_res_reso,
  str_res_attack,
  str_res_decay,
  str_res_release,
  str_res_lfo_4,
  str_res_vca,
  str_res_lp,
  str_res_bp,
  str_res_hp,
  str_res_nt,
  str_res_free,
  str_res_envTlfo,
  str_res_lfoTenv,
  str_res_step_seq,
  str_res_arpeggio,
  str_res_pattern,
  str_res_off,
  str_res_add,
  str_res_prod,
  str_res_attn,
  str_res_max,
  str_res_min,
  str_res_xor,
  str_res_ge,
  str_res_le,
  str_res_qtz,
  str_res_lag,
  str_res_mono,
  str_res_poly,
  str_res_2x_unison,
  str_res_cyclic,
  str_res_chain,
  str_res_up,
  str_res_down,
  str_res_up_down,
  str_res_played,
  str_res_random,
  str_res_chord,
  str_res_1_1,
  str_res_3_4,
  str_res_2_3,
  str_res_1_2,
  str_res_3_8,
  str_res_1_3,
  str_res_1_4,
  str_res_1_6,
  str_res_1_8,
  str_res_1_12,
  str_res_1_16,
  str_res_1_24,
  str_res_1_32,
  str_res_1_48,
  str_res_1_96,
  str_res_thru,
  str_res_sequencer,
  str_res_controllr,
  str_res_chain,
  str_res_full,
  str_res_____,
  str_res____s,
  str_res___p_,
  str_res___ps,
  str_res__n__,
  str_res__n_s,
  str_res__np_,
  str_res__nps,
  str_res_c___,
  str_res_c__s,
  str_res_c_p_,
  str_res_c_ps,
  str_res_cn__,
  str_res_cn_s,
  str_res_cnp_,
  str_res_cnps,
  str_res_swing,
  str_res_shuffle,
  str_res_push,
  str_res_lag,
  str_res_human,
  str_res_monkey,
  str_res_oscillator_1,
  str_res_oscillator_2,
  str_res_mixer,
  str_res_lfo,
  str_res_filter_1,
  str_res_filter_2,
  str_res_envelope,
  str_res_arpeggiator,
  str_res_multi,
  str_res_clock,
  str_res_performance,
  str_res_system,
  str_res_pt_x_patch,
  str_res_pt_x_sequence,
  str_res_pt_x_program,
  str_res_randomize,
  str_res_init,
  str_res_patch,
  str_res_sequence,
  str_res_program,
  str_res__multi,
  str_res____,
  str_res_equal,
  str_res_just,
  str_res_pythagorean,
  str_res_1_4_eb,
  str_res_1_4_e,
  str_res_1_4_ea,
  str_res_bhairav,
  str_res_gunakri,
  str_res_marwa,
  str_res_shree,
  str_res_purvi,
  str_res_bilawal,
  str_res_yaman,
  str_res_kafi,
  str_res_bhimpalasree,
  str_res_darbari,
  str_res_bageshree,
  str_res_rageshree,
  str_res_khamaj,
  str_res_mimal,
  str_res_parameshwari,
  str_res_rangeshwari,
  str_res_gangeshwari,
  str_res_kameshwari,
  str_res_pa__kafi,
  str_res_natbhairav,
  str_res_m_kauns,
  str_res_bairagi,
  str_res_b_todi,
  str_res_chandradeep,
  str_res_kaushik_todi,
  str_res_jogeshwari,
  str_res_rasia,
};

const prog_uint16_t lut_res_lfo_increments[] PROGMEM = {
       4,      4,      4,      4,      5,      5,      5,      6,
       6,      7,      7,      7,      8,      8,      9,      9,
      10,     11,     11,     12,     13,     14,     14,     15,
      16,     17,     18,     20,     21,     22,     23,     25,
      26,     28,     30,     31,     33,     35,     37,     40,
      42,     45,     47,     50,     53,     57,     60,     64,
      67,     71,     76,     80,     85,     90,     96,    101,
     108,    114,    121,    128,    136,    144,    153,    162,
     172,    182,    193,    204,    217,    230,    243,    258,
     273,    290,    307,    325,    345,    366,    388,    411,
     435,    461,    489,    518,    549,    582,    617,    654,
     693,    735,    779,    825,    875,    927,    982,   1041,
    1104,   1170,   1240,   1314,   1392,   1476,   1564,   1657,
    1757,   1862,   1973,   2091,   2216,   2349,   2489,   2638,
    2796,   2963,   3141,   3329,   3528,   3739,   3962,   4199,
    4451,   4717,   4999,   5298,   5615,   5951,   6307,   6684,
};
const prog_uint16_t lut_res_scale_just[] PROGMEM = {
       0,     15,      5,     20,    -17,     -2,    -12,      2,
      17,    -20,     -5,    -15,
};
const prog_uint16_t lut_res_scale_pythagorean[] PROGMEM = {
       0,     15,      5,     -7,     10,     -2,    -12,      2,
      17,    -20,     -5,     12,
};
const prog_uint16_t lut_res_scale_1_4_eb[] PROGMEM = {
       0,      0,      0,      0,    -64,      0,      0,      0,
       0,      0,      0,    -64,
};
const prog_uint16_t lut_res_scale_1_4_e[] PROGMEM = {
       0,      0,      0,      0,    -64,      0,      0,      0,
       0,      0,      0,      0,
};
const prog_uint16_t lut_res_scale_1_4_ea[] PROGMEM = {
       0,      0,      0,      0,    -64,      0,      0,      0,
       0,    -64,      0,      0,
};
const prog_uint16_t lut_res_scale_bhairav[] PROGMEM = {
       0,    -12,  32767,  32767,    -17,     -2,  32767,      2,
     -10,  32767,  32767,    -15,
};
const prog_uint16_t lut_res_scale_gunakri[] PROGMEM = {
       0,     15,  32767,  32767,  32767,     -2,  32767,      2,
      17,  32767,  32767,  32767,
};
const prog_uint16_t lut_res_scale_marwa[] PROGMEM = {
       0,     15,  32767,  32767,    -17,  32767,    -12,  32767,
   32767,    -20,  32767,    -15,
};
const prog_uint16_t lut_res_scale_shree[] PROGMEM = {
       0,    -12,  32767,  32767,    -17,  32767,    -12,      2,
     -10,  32767,  32767,    -15,
};
const prog_uint16_t lut_res_scale_purvi[] PROGMEM = {
       0,     15,  32767,  32767,    -17,  32767,    -12,      2,
      17,  32767,  32767,    -15,
};
const prog_uint16_t lut_res_scale_bilawal[] PROGMEM = {
       0,  32767,      5,  32767,    -17,     -2,  32767,      2,
   32767,      7,  32767,    -15,
};
const prog_uint16_t lut_res_scale_yaman[] PROGMEM = {
       0,  32767,      5,  32767,     10,  32767,     15,      2,
   32767,      7,  32767,     12,
};
const prog_uint16_t lut_res_scale_kafi[] PROGMEM = {
       0,  32767,    -22,     -7,  32767,     -2,  32767,      2,
   32767,    -20,     -5,  32767,
};
const prog_uint16_t lut_res_scale_bhimpalasree[] PROGMEM = {
       0,  32767,      5,     20,  32767,     -2,  32767,      2,
   32767,      7,     22,  32767,
};
const prog_uint16_t lut_res_scale_darbari[] PROGMEM = {
       0,  32767,      5,     -7,  32767,     -2,  32767,      2,
     -10,  32767,     -5,  32767,
};
const prog_uint16_t lut_res_scale_rageshree[] PROGMEM = {
       0,  32767,      5,  32767,    -17,     -2,  32767,      2,
   32767,    -20,     -5,  32767,
};
const prog_uint16_t lut_res_scale_khamaj[] PROGMEM = {
       0,  32767,      5,  32767,    -17,     -2,  32767,      2,
   32767,      7,     -5,     12,
};
const prog_uint16_t lut_res_scale_mimal[] PROGMEM = {
       0,  32767,      5,     -7,  32767,     -2,  32767,      2,
   32767,    -20,     -5,    -15,
};
const prog_uint16_t lut_res_scale_parameshwari[] PROGMEM = {
       0,    -12,  32767,     -7,  32767,     -2,  32767,  32767,
   32767,    -20,     -5,  32767,
};
const prog_uint16_t lut_res_scale_rangeshwari[] PROGMEM = {
       0,  32767,      5,     -7,  32767,     -2,  32767,      2,
   32767,  32767,  32767,    -15,
};
const prog_uint16_t lut_res_scale_gangeshwari[] PROGMEM = {
       0,  32767,  32767,  32767,    -17,     -2,  32767,      2,
     -10,  32767,     -5,  32767,
};
const prog_uint16_t lut_res_scale_kameshwari[] PROGMEM = {
       0,  32767,      5,  32767,  32767,  32767,    -12,      2,
   32767,    -20,     -5,  32767,
};
const prog_uint16_t lut_res_scale_pa__kafi[] PROGMEM = {
       0,  32767,      5,     -7,  32767,     -2,  32767,      2,
   32767,      7,     -5,  32767,
};
const prog_uint16_t lut_res_scale_natbhairav[] PROGMEM = {
       0,  32767,      5,  32767,    -17,     -2,  32767,      2,
     -10,  32767,  32767,    -15,
};
const prog_uint16_t lut_res_scale_m_kauns[] PROGMEM = {
       0,  32767,      5,  32767,     10,     -2,  32767,  32767,
     -10,  32767,     -5,  32767,
};
const prog_uint16_t lut_res_scale_bairagi[] PROGMEM = {
       0,    -12,  32767,  32767,  32767,     -2,  32767,      2,
   32767,  32767,     -5,  32767,
};
const prog_uint16_t lut_res_scale_b_todi[] PROGMEM = {
       0,    -12,  32767,     -7,  32767,  32767,  32767,      2,
   32767,  32767,     -5,  32767,
};
const prog_uint16_t lut_res_scale_chandradeep[] PROGMEM = {
       0,  32767,  32767,     -7,  32767,     -2,  32767,      2,
   32767,  32767,     -5,  32767,
};
const prog_uint16_t lut_res_scale_kaushik_todi[] PROGMEM = {
       0,  32767,  32767,     -7,  32767,     -2,    -12,  32767,
     -10,  32767,  32767,  32767,
};
const prog_uint16_t lut_res_scale_jogeshwari[] PROGMEM = {
       0,  32767,  32767,     -7,    -17,     -2,  32767,  32767,
   32767,    -20,     -5,  32767,
};
const prog_uint16_t lut_res_arpeggiator_patterns[] PROGMEM = {
   21845,  62965,  46517,  54741,  43861,  22869,  38293,   2313,
   37449,  21065,  18761,  54553,  27499,  23387,  30583,  28087,
   22359,  28527,  30431,  43281,  28609,  53505,
};
const prog_uint16_t lut_res_groove_swing[] PROGMEM = {
     127,    127,   -127,   -127,    127,    127,   -127,   -127,
     127,    127,   -127,   -127,    127,    127,   -127,   -127,
};
const prog_uint16_t lut_res_groove_shuffle[] PROGMEM = {
     127,   -127,    127,   -127,    127,   -127,    127,   -127,
     127,   -127,    127,   -127,    127,   -127,    127,   -127,
};
const prog_uint16_t lut_res_groove_push[] PROGMEM = {
     -63,    -63,    127,      0,   -127,      0,      0,     88,
       0,      0,     88,    -50,    -88,      0,     88,      0,
};
const prog_uint16_t lut_res_groove_lag[] PROGMEM = {
      19,     44,     93,     -4,     32,    -53,    -90,   -127,
     117,     32,   -102,    -53,    105,    -53,     93,    -53,
};
const prog_uint16_t lut_res_groove_human[] PROGMEM = {
      88,   -101,    107,    -95,     88,    -88,     50,    -38,
      65,    -88,    101,    -95,    101,   -127,     63,    -31,
};
const prog_uint16_t lut_res_groove_monkey[] PROGMEM = {
      70,    -84,     84,   -112,     84,    -98,    112,    -98,
      54,    -70,    127,    -84,    127,   -112,     84,    -84,
};


PROGMEM const prog_uint16_t* const lookup_table_table[] = {
  lut_res_lfo_increments,
  lut_res_scale_just,
  lut_res_scale_pythagorean,
  lut_res_scale_1_4_eb,
  lut_res_scale_1_4_e,
  lut_res_scale_1_4_ea,
  lut_res_scale_bhairav,
  lut_res_scale_gunakri,
  lut_res_scale_marwa,
  lut_res_scale_shree,
  lut_res_scale_purvi,
  lut_res_scale_bilawal,
  lut_res_scale_yaman,
  lut_res_scale_kafi,
  lut_res_scale_bhimpalasree,
  lut_res_scale_darbari,
  lut_res_scale_kafi,
  lut_res_scale_rageshree,
  lut_res_scale_khamaj,
  lut_res_scale_mimal,
  lut_res_scale_parameshwari,
  lut_res_scale_rangeshwari,
  lut_res_scale_gangeshwari,
  lut_res_scale_kameshwari,
  lut_res_scale_pa__kafi,
  lut_res_scale_natbhairav,
  lut_res_scale_m_kauns,
  lut_res_scale_bairagi,
  lut_res_scale_b_todi,
  lut_res_scale_chandradeep,
  lut_res_scale_kaushik_todi,
  lut_res_scale_jogeshwari,
  lut_res_scale_yaman,
  lut_res_arpeggiator_patterns,
  lut_res_groove_swing,
  lut_res_groove_shuffle,
  lut_res_groove_push,
  lut_res_groove_lag,
  lut_res_groove_human,
  lut_res_groove_monkey,
};

const prog_uint8_t chr_res_special_characters[] PROGMEM = {
       2,      3,      3,      2,      2,     14,     30,     12,
       0,      0,      4,      4,     14,     31,     31,      0,
       0,      0,      8,     21,      2,      0,      0,      0,
       1,      1,      1,      3,      3,      0,     18,     12,
       0,     25,     27,      6,      2,      4,      4,      8,
       0,     16,      8,      4,      2,      1,      0,      0,
       4,      0,      4,      0,      4,      0,      4,      0,
};


const prog_uint8_t* const character_table[] = {
  chr_res_special_characters,
};

const prog_uint8_t wav_res_lfo_waveforms[] PROGMEM = {
     128,    134,    140,    146,    152,    158,    164,    170,
     176,    182,    187,    193,    198,    203,    208,    212,
     217,    221,    225,    229,    233,    236,    239,    242,
     244,    247,    249,    250,    252,    253,    253,    254,
     254,    254,    253,    253,    252,    250,    249,    247,
     244,    242,    239,    236,    233,    229,    225,    221,
     217,    212,    208,    203,    198,    193,    187,    182,
     176,    170,    164,    158,    152,    146,    140,    134,
     128,    121,    115,    109,    103,     97,     91,     85,
      79,     73,     68,     62,     57,     52,     47,     43,
      38,     34,     30,     26,     22,     19,     16,     13,
      11,      8,      6,      5,      3,      2,      2,      1,
       1,      1,      2,      2,      3,      5,      6,      8,
      11,     13,     16,     19,     22,     26,     30,     34,
      38,     43,     47,     52,     57,     62,     68,     73,
      79,     85,     91,     97,    103,    109,    115,    121,
     128,    128,    138,    148,    157,    167,    177,    186,
     194,    203,    210,    218,    224,    230,    236,    241,
     245,    248,    251,    252,    254,    254,    254,    253,
     251,    249,    246,    243,    239,    234,    230,    224,
     219,    213,    207,    201,    195,    189,    182,    176,
     170,    164,    159,    153,    148,    143,    139,    135,
     131,    128,    125,    123,    121,    120,    119,    118,
     118,    118,    118,    119,    120,    121,    123,    124,
     126,    128,    129,    131,    132,    134,    135,    136,
     137,    137,    137,    137,    136,    135,    134,    132,
     130,    127,    124,    120,    116,    112,    107,    102,
      96,     91,     85,     79,     73,     66,     60,     54,
      48,     42,     36,     31,     25,     21,     16,     12,
       9,      6,      4,      2,      1,      1,      1,      3,
       4,      7,     10,     14,     19,     25,     31,     37,
      45,     52,     61,     69,     78,     88,     98,    107,
     117,    128,    128,    143,    158,    172,    186,    199,
     211,    222,    231,    239,    245,    250,    253,    254,
     254,    252,    249,    244,    239,    232,    225,    217,
     209,    201,    194,    186,    179,    173,    168,    163,
     160,    158,    158,    158,    160,    163,    168,    173,
     179,    186,    194,    201,    209,    217,    225,    232,
     239,    244,    249,    252,    254,    254,    253,    250,
     245,    239,    231,    222,    211,    199,    186,    172,
     158,    143,    128,    112,     97,     83,     69,     56,
      44,     33,     24,     16,     10,      5,      2,      1,
       1,      3,      6,     11,     16,     23,     30,     38,
      46,     54,     61,     69,     76,     82,     87,     92,
      95,     97,     97,     97,     95,     92,     87,     82,
      76,     69,     61,     54,     46,     38,     30,     23,
      16,     11,      6,      3,      1,      1,      2,      5,
      10,     16,     24,     33,     44,     56,     69,     83,
      97,    112,    128,    128,    144,    159,    173,    185,
     195,    201,    204,    204,    201,    196,    188,    179,
     169,    160,    151,    143,    138,    135,    135,    138,
     144,    153,    164,    176,    190,    204,    217,    229,
     240,    247,    252,    254,    252,    247,    240,    229,
     217,    204,    190,    176,    164,    153,    144,    138,
     135,    135,    138,    143,    151,    160,    169,    179,
     188,    196,    201,    204,    204,    201,    195,    185,
     173,    159,    144,    128,    111,     96,     82,     70,
      60,     54,     51,     51,     54,     59,     67,     76,
      86,     95,    104,    112,    117,    120,    120,    117,
     111,    102,     91,     79,     65,     51,     38,     26,
      15,      8,      3,      1,      3,      8,     15,     26,
      38,     51,     65,     79,     91,    102,    111,    117,
     120,    120,    117,    112,    104,     95,     86,     76,
      67,     59,     54,     51,     51,     54,     60,     70,
      82,     96,    111,    128,      1,      1,      1,      3,
       5,      8,     13,     19,     27,     37,     49,     62,
      77,     93,    110,    128,    145,    163,    180,    196,
     211,    224,    235,    243,    250,    253,    254,    252,
     248,    241,    231,    220,    206,    191,    176,    159,
     142,    125,    108,     92,     76,     62,     49,     37,
      27,     19,     12,      6,      2,      1,      1,      1,
       1,      1,      1,      1,      1,      1,      1,      1,
       1,      1,      1,      1,      1,      1,      1,      1,
       2,      2,      3,      3,      4,      5,      6,      7,
       7,      6,      5,      3,      1,      1,      1,      1,
       1,      1,      1,      1,      1,      1,      1,      1,
       1,      1,      1,      1,      1,      1,      1,      1,
       1,      1,      1,      1,      1,      1,      1,      1,
       1,      1,      1,      1,      1,      1,      1,      1,
       1,      1,      1,      1,      1,      1,      1,      1,
       1,      1,      1,      1,      1,      1,      1,      2,
       5,      9,     17,     27,     41,     58,     77,     99,
     122,    146,    169,    191,    211,    228,    241,    250,
     254,    254,    249,    240,    227,    212,    196,    178,
     161,    146,    133,    123,    116,    114,    116,    123,
     133,    146,    161,    178,    196,    212,    227,    240,
     249,    254,    254,    250,    241,    228,    211,    191,
     169,    146,    122,     99,     77,     58,     41,     27,
      17,      9,      5,      2,      1,      1,      1,      1,
       1,      1,      1,      1,      1,      1,      1,      1,
       1,      1,      1,      1,      1,      1,      1,      1,
       1,      1,      1,      1,      1,      1,      1,      1,
       1,      1,      1,      1,      1,      1,      1,      1,
       1,      1,      1,      1,      1,      1,      1,      1,
       1,      1,      1,      1,      1,      1,      1,      1,
       1,      1,      1,      1,      1,      1,      1,      1,
       1,      1,      1,      1,      1,      1,     63,     57,
      51,     45,     39,     33,     27,     21,     15,      9,
       3,      1,      7,     13,     19,     25,     31,     37,
      43,     49,     55,     61,     67,     73,     79,     85,
      91,     97,    103,    109,    115,    121,    128,    134,
     140,    146,    152,    158,    164,    170,    176,    182,
     188,    194,    200,    206,    212,    218,    224,    230,
     236,    242,    248,    254,    252,    246,    240,    234,
     228,    222,    216,    210,    204,    198,    192,    198,
     204,    210,    216,    222,    228,    234,    240,    246,
     252,    254,    248,    242,    236,    230,    224,    218,
     212,    206,    200,    194,    188,    182,    176,    170,
     164,    158,    152,    146,    140,    134,    128,    121,
     115,    109,    103,     97,     91,     85,     79,     73,
      67,     61,     55,     49,     43,     37,     31,     25,
      19,     13,      7,      1,      3,      9,     15,     21,
      27,     33,     39,     45,     51,     57,     63,    128,
     120,    112,    104,     96,     88,     80,     72,     64,
      56,     48,     41,     33,     25,     17,      9,      1,
       9,     17,     25,     33,     41,     48,     56,     64,
      72,     80,     88,     96,    104,    112,    120,    128,
     135,    143,    151,    159,    167,    175,    183,    191,
     199,    207,    214,    222,    230,    238,    246,    254,
     246,    238,    230,    222,    214,    207,    199,    191,
     183,    175,    167,    159,    151,    143,    135,    128,
     135,    143,    151,    159,    167,    175,    183,    191,
     199,    207,    214,    222,    230,    238,    246,    254,
     246,    238,    230,    222,    214,    207,    199,    191,
     183,    175,    167,    159,    151,    143,    135,    128,
     120,    112,    104,     96,     88,     80,     72,     64,
      56,     48,     41,     33,     25,     17,      9,      1,
       9,     17,     25,     33,     41,     48,     56,     64,
      72,     80,     88,     96,    104,    112,    120,    128,
       1,      2,      3,      3,      4,      5,      6,      7,
       8,      9,     10,     11,     12,     14,     15,     16,
      18,     19,     21,     23,     24,     26,     28,     30,
      32,     34,     36,     38,     41,     43,     46,     49,
      52,     55,     58,     61,     64,     68,     72,     76,
      80,     84,     88,     93,     98,    103,    108,    113,
     119,    125,    131,    138,    145,    152,    159,    167,
     175,    183,    192,    201,    211,    221,    232,    243,
     254,    243,    232,    221,    211,    201,    192,    183,
     175,    167,    159,    152,    145,    138,    131,    125,
     119,    113,    108,    103,     98,     93,     88,     84,
      80,     76,     72,     68,     64,     61,     58,     55,
      52,     49,     46,     43,     41,     38,     36,     34,
      32,     30,     28,     26,     24,     23,     21,     19,
      18,     16,     15,     14,     12,     11,     10,      9,
       8,      7,      6,      5,      4,      3,      3,      2,
       1,      1,     12,     22,     32,     41,     48,     56,
      62,     68,     74,     79,     84,     88,     92,     96,
      99,    102,    105,    108,    110,    112,    114,    116,
     118,    119,    120,    122,    123,    124,    125,    126,
     127,    128,    128,    129,    130,    131,    132,    133,
     135,    136,    137,    139,    141,    143,    145,    147,
     150,    153,    156,    159,    163,    167,    171,    176,
     181,    187,    193,    199,    207,    214,    223,    233,
     243,    254,    243,    233,    223,    214,    207,    199,
     193,    187,    181,    176,    171,    167,    163,    159,
     156,    153,    150,    147,    145,    143,    141,    139,
     137,    136,    135,    133,    132,    131,    130,    129,
     128,    128,    127,    126,    125,    124,    123,    122,
     120,    119,    118,    116,    114,    112,    110,    108,
     105,    102,     99,     96,     92,     88,     84,     79,
      74,     68,     62,     56,     48,     41,     32,     22,
      12,      1,    229,    205,    184,    164,    147,    130,
     116,    102,     90,     79,     69,     60,     51,     44,
      38,     32,     26,     22,     18,     14,     11,      9,
       7,      5,      4,      2,      2,      1,      1,      1,
       1,      2,      2,      3,      4,      5,      6,      8,
       9,     11,     13,     14,     16,     18,     20,     22,
      25,     27,     29,     31,     34,     36,     39,     41,
      44,     46,     49,     51,     54,     57,     59,     62,
      65,     68,     70,     73,     76,     79,     82,     84,
      87,     90,     93,     96,     99,    102,    104,    107,
     110,    113,    116,    119,    122,    125,    128,    130,
     133,    136,    139,    142,    145,    148,    151,    154,
     157,    160,    163,    166,    169,    171,    174,    177,
     180,    183,    186,    189,    192,    195,    198,    201,
     204,    207,    210,    213,    216,    219,    222,    225,
     227,    230,    233,    236,    239,    242,    245,    248,
     251,    254,    229,     20,     38,     54,     69,     83,
      96,    108,    119,    130,    139,    148,    156,    163,
     170,    177,    183,    188,    193,    198,    202,    206,
     210,    213,    217,    220,    222,    225,    227,    229,
     231,    233,    235,    236,    238,    239,    240,    242,
     243,    244,    245,    245,    246,    247,    248,    248,
     249,    249,    250,    250,    251,    251,    251,    252,
     252,    252,    253,    253,    253,    253,    253,    254,
     254,    254,    254,    235,    217,    201,    186,    172,
     159,    147,    136,    125,    116,    107,     99,     92,
      85,     78,     72,     67,     62,     57,     53,     49,
      45,     42,     38,     35,     33,     30,     28,     26,
      24,     22,     20,     19,     17,     16,     15,     13,
      12,     11,     10,     10,      9,      8,      7,      7,
       6,      6,      5,      5,      4,      4,      4,      3,
       3,      3,      2,      2,      2,      2,      2,      1,
       1,      1,      1,     20,    254,    230,    189,    139,
      88,     45,     15,      1,      2,     17,     41,     70,
      99,    124,    142,    152,    153,    148,    137,    123,
     110,     98,     91,     88,     89,     94,    102,    111,
     121,    129,    135,    139,    140,    139,    137,    134,
     131,    129,    128,    128,    129,    131,    135,    138,
     142,    145,    148,    150,    151,    152,    152,    152,
     153,    153,    153,    154,    156,    157,    159,    161,
     163,    165,    167,    168,    170,    171,    172,    173,
     174,    175,    176,    177,    179,    180,    182,    183,
     185,    186,    188,    189,    190,    192,    193,    194,
     195,    197,    198,    199,    200,    202,    203,    205,
     206,    207,    209,    210,    211,    213,    214,    215,
     217,    218,    219,    221,    222,    223,    225,    226,
     227,    229,    230,    231,    233,    234,    235,    237,
     238,    239,    241,    242,    243,    245,    246,    247,
     249,    250,    251,    253,    254,     67,     85,    115,
     152,    189,    221,    243,    254,    254,    244,    228,
     208,    189,    172,    160,    154,    154,    159,    168,
     178,    189,    198,    204,    207,    207,    205,    200,
     194,    189,    184,    181,    179,    179,    180,    183,
     186,    189,    191,    193,    194,    194,    193,    192,
     190,    189,    187,    186,    186,    186,    186,    187,
     188,    189,    190,    190,    190,    190,    190,    190,
     189,    189,    188,    188,    188,    188,    170,    140,
     103,     66,     34,     12,      1,      1,     11,     27,
      47,     66,     83,     95,    101,    101,     96,     87,
      77,     66,     57,     51,     48,     48,     50,     55,
      61,     66,     71,     74,     76,     76,     75,     72,
      69,     66,     64,     62,     61,     61,     62,     63,
      65,     66,     68,     69,     69,     69,     69,     68,
      67,     66,     65,     65,     65,     65,     65,     65,
      66,     66,     67,     67,     67,     67,      1,      1,
       1,      1,      1,      1,      1,      1,      1,      1,
       1,     85,     85,     85,     85,     85,     85,     85,
      85,     85,     85,     85,     85,     85,     85,     85,
      85,     85,     85,     85,     85,     85,    170,    170,
     170,    170,    170,    170,    170,    170,    170,    170,
     170,    170,    170,    170,    170,    170,    170,    170,
     170,    170,    170,    170,    254,    254,    254,    254,
     254,    254,    254,    254,    254,    254,    254,    254,
     254,    254,    254,    254,    254,    254,    254,    254,
     254,    170,    170,    170,    170,    170,    170,    170,
     170,    170,    170,    170,    170,    170,    170,    170,
     170,    170,    170,    170,    170,    170,    170,     85,
      85,     85,     85,     85,     85,     85,     85,     85,
      85,     85,     85,     85,     85,     85,     85,     85,
      85,     85,     85,     85,      1,      1,      1,      1,
       1,      1,      1,      1,      1,      1,      1,      1,
       1,      1,     18,     18,     18,     18,     35,     35,
      35,     35,     52,     52,     52,     52,     68,     68,
      68,     68,     68,     85,     85,     85,     85,    102,
     102,    102,    102,    119,    119,    119,    119,    136,
     136,    136,    136,    136,    153,    153,    153,    153,
     170,    170,    170,    170,    187,    187,    187,    187,
     187,    203,    203,    203,    203,    220,    220,    220,
     220,    237,    237,    237,    237,    254,    254,    254,
     254,    254,    237,    237,    237,    237,    220,    220,
     220,    220,    203,    203,    203,    203,    187,    187,
     187,    187,    187,    170,    170,    170,    170,    153,
     153,    153,    153,    136,    136,    136,    136,    136,
     119,    119,    119,    119,    102,    102,    102,    102,
      85,     85,     85,     85,     68,     68,     68,     68,
      68,     52,     52,     52,     52,     35,     35,     35,
      35,     18,     18,     18,     18,      1,      1,      1,
};


const prog_uint8_t* const waveform_table[] = {
  wav_res_lfo_waveforms,
};


}  // namespace ambika
