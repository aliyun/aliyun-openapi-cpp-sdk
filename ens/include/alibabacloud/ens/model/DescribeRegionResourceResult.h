/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *      http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef ALIBABACLOUD_ENS_MODEL_DESCRIBEREGIONRESOURCERESULT_H_
#define ALIBABACLOUD_ENS_MODEL_DESCRIBEREGIONRESOURCERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ens/EnsExport.h>

namespace AlibabaCloud
{
	namespace Ens
	{
		namespace Model
		{
			class ALIBABACLOUD_ENS_EXPORT DescribeRegionResourceResult : public ServiceResult
			{
			public:
				struct Pager
				{
					long size;
					long total;
					long page;
				};
				struct DataItem
				{
					struct ArmCard
					{
						long reserveDisableTotal;
						std::string type;
						long remain;
						long used;
						long usedRatio;
						long oversellRatio;
						long statusDisableTotal;
						long total;
						bool statusDisable;
						bool reserveDisable;
						bool display;
						long reserved;
					};
					struct Bandwidth
					{
						long reserveDisableTotal;
						std::string type;
						long remain;
						long used;
						long usedRatio;
						long oversellRatio;
						long statusDisableTotal;
						long total;
						bool statusDisable;
						bool reserveDisable;
						bool display;
						long reserved;
					};
					struct BlockStorage
					{
						long reserveDisableTotal;
						std::string type;
						long remain;
						long used;
						long usedRatio;
						long oversellRatio;
						long statusDisableTotal;
						long total;
						bool statusDisable;
						bool reserveDisable;
						bool display;
						long reserved;
					};
					struct Cpu
					{
						long reserveDisableTotal;
						std::string type;
						long remain;
						long used;
						long usedRatio;
						long oversellRatio;
						long statusDisableTotal;
						long total;
						bool statusDisable;
						bool reserveDisable;
						bool display;
						long reserved;
					};
					struct Memory
					{
						long reserveDisableTotal;
						std::string type;
						long remain;
						long used;
						long usedRatio;
						long oversellRatio;
						long statusDisableTotal;
						long total;
						bool statusDisable;
						bool reserveDisable;
						bool display;
						long reserved;
					};
					struct Gpu
					{
						long reserveDisableTotal;
						std::string type;
						long remain;
						long used;
						long usedRatio;
						long oversellRatio;
						long statusDisableTotal;
						long total;
						bool statusDisable;
						bool reserveDisable;
						bool display;
						long reserved;
					};
					struct Hdd
					{
						long reserveDisableTotal;
						std::string type;
						long remain;
						long used;
						long usedRatio;
						long oversellRatio;
						long statusDisableTotal;
						long total;
						bool statusDisable;
						bool reserveDisable;
						bool display;
						long reserved;
					};
					struct Ssd
					{
						long reserveDisableTotal;
						std::string type;
						long remain;
						long used;
						long usedRatio;
						long oversellRatio;
						long statusDisableTotal;
						long total;
						bool statusDisable;
						bool reserveDisable;
						bool display;
						long reserved;
					};
					struct Nvme
					{
						long reserveDisableTotal;
						std::string type;
						long remain;
						long used;
						long usedRatio;
						long oversellRatio;
						long statusDisableTotal;
						long total;
						bool statusDisable;
						bool reserveDisable;
						bool display;
						long reserved;
					};
					struct OssStorage
					{
						long reserveDisableTotal;
						std::string type;
						long remain;
						long used;
						long usedRatio;
						long oversellRatio;
						long statusDisableTotal;
						long total;
						bool statusDisable;
						bool reserveDisable;
						bool display;
						long reserved;
					};
					struct Pangu
					{
						long reserveDisableTotal;
						std::string type;
						long remain;
						long used;
						long usedRatio;
						long oversellRatio;
						long statusDisableTotal;
						long total;
						bool statusDisable;
						bool reserveDisable;
						bool display;
						long reserved;
					};
					struct PcfarmNum
					{
						long reserveDisableTotal;
						std::string type;
						long remain;
						long used;
						long usedRatio;
						long oversellRatio;
						long statusDisableTotal;
						long total;
						bool statusDisable;
						bool reserveDisable;
						bool display;
						long reserved;
					};
					struct Ipv4sItem
					{
						long remain;
						long usedRatio;
						std::string isp;
						std::string vlan;
						long reserveDisableTotal;
						std::string type;
						long used;
						long oversellRatio;
						long statusDisableTotal;
						long total;
						bool statusDisable;
						bool reserveDisable;
						std::string display;
						long reserved;
					};
					struct Ipv6sItem
					{
						long remain;
						long usedRatio;
						std::string isp;
						std::string vlan;
						long reserveDisableTotal;
						std::string type;
						long used;
						long oversellRatio;
						long statusDisableTotal;
						long total;
						bool statusDisable;
						bool reserveDisable;
						std::string display;
						long reserved;
					};
					std::string countryName;
					Memory memory;
					std::vector<std::string> attributes;
					Cpu cpu;
					Hdd hdd;
					PcfarmNum pcfarmNum;
					Gpu gpu;
					std::string name;
					std::string areaName;
					std::string provinceName;
					BlockStorage blockStorage;
					Bandwidth bandwidth;
					bool statusDisable;
					std::string countryCode;
					bool reserveDisable;
					Ssd ssd;
					Nvme nvme;
					bool poc;
					std::string houseId;
					std::vector<std::string> ispTypes;
					ArmCard armCard;
					std::string type;
					std::string uuid;
					std::vector<DataItem::Ipv6sItem> ipv6s;
					std::vector<DataItem::Ipv4sItem> ipv4s;
					std::string areaCode;
					OssStorage ossStorage;
					std::string provinceCode;
					std::string _virtual;
					Pangu pangu;
				};


				DescribeRegionResourceResult();
				explicit DescribeRegionResourceResult(const std::string &payload);
				~DescribeRegionResourceResult();
				std::string getMsg()const;
				std::string getDesc()const;
				Pager getPager()const;
				std::vector<DataItem> getData()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string msg_;
				std::string desc_;
				Pager pager_;
				std::vector<DataItem> data_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ENS_MODEL_DESCRIBEREGIONRESOURCERESULT_H_