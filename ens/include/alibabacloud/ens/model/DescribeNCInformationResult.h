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

#ifndef ALIBABACLOUD_ENS_MODEL_DESCRIBENCINFORMATIONRESULT_H_
#define ALIBABACLOUD_ENS_MODEL_DESCRIBENCINFORMATIONRESULT_H_

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
			class ALIBABACLOUD_ENS_EXPORT DescribeNCInformationResult : public ServiceResult
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
					struct Info
					{
						std::string uuid;
						std::string ip;
						std::vector<std::string> tag;
						std::string name;
					};
					Ssd ssd;
					Nvme nvme;
					Memory memory;
					Cpu cpu;
					Hdd hdd;
					std::string region;
					Info info;
					bool online;
					Gpu gpu;
					std::string _virtual;
				};


				DescribeNCInformationResult();
				explicit DescribeNCInformationResult(const std::string &payload);
				~DescribeNCInformationResult();
				std::string getMsg()const;
				std::string getDesc()const;
				int getTotalCount()const;
				int getCurrentPage()const;
				Pager getPager()const;
				std::vector<DataItem> getData()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string msg_;
				std::string desc_;
				int totalCount_;
				int currentPage_;
				Pager pager_;
				std::vector<DataItem> data_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ENS_MODEL_DESCRIBENCINFORMATIONRESULT_H_