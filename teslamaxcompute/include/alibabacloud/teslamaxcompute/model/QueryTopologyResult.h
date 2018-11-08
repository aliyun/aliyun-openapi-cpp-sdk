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

#ifndef ALIBABACLOUD_TESLAMAXCOMPUTE_MODEL_QUERYTOPOLOGYRESULT_H_
#define ALIBABACLOUD_TESLAMAXCOMPUTE_MODEL_QUERYTOPOLOGYRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/teslamaxcompute/TeslaMaxComputeExport.h>

namespace AlibabaCloud
{
	namespace TeslaMaxCompute
	{
		namespace Model
		{
			class ALIBABACLOUD_TESLAMAXCOMPUTE_EXPORT QueryTopologyResult : public ServiceResult
			{
			public:
				struct ResultItem
				{
					struct RegionItem
					{
						struct ClusterItem
						{
							std::string netArch;
							std::string netCode;
							std::string cluster;
							std::string machineRoom;
							std::string productClass;
							std::string productLine;
							std::string business;
						};
						std::vector<RegionItem::ClusterItem> clusters;
						std::string regionEnName;
						std::string region;
						std::string regionCnName;
					};
					std::string lastUpdate;
					std::vector<ResultItem::RegionItem> regions;
				};


				QueryTopologyResult();
				explicit QueryTopologyResult(const std::string &payload);
				~QueryTopologyResult();
				std::string getMessage()const;
				int getCode()const;
				std::vector<ResultItem> getResult()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				int code_;
				std::vector<ResultItem> result_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_TESLAMAXCOMPUTE_MODEL_QUERYTOPOLOGYRESULT_H_