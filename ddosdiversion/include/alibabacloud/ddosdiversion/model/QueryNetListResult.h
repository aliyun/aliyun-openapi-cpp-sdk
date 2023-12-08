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

#ifndef ALIBABACLOUD_DDOSDIVERSION_MODEL_QUERYNETLISTRESULT_H_
#define ALIBABACLOUD_DDOSDIVERSION_MODEL_QUERYNETLISTRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ddosdiversion/DdosDiversionExport.h>

namespace AlibabaCloud
{
	namespace DdosDiversion
	{
		namespace Model
		{
			class ALIBABACLOUD_DDOSDIVERSION_EXPORT QueryNetListResult : public ServiceResult
			{
			public:
				struct DataItem
				{
					struct Data
					{
						struct DDoSDefense
						{
							struct DjPolicy
							{
								std::string policyName;
							};
							struct CleanTh
							{
								int pps;
								int mbps;
							};
							struct HoleTh
							{
								int threshMbps;
							};
							CleanTh cleanTh;
							DjPolicy djPolicy;
							HoleTh holeTh;
						};
						struct DeclaredItem
						{
							std::string region;
							std::string declared;
						};
						DDoSDefense dDoSDefense;
						long netExtend;
						std::string upstreamType;
						std::string mode;
						std::string saleId;
						std::vector<Data::DeclaredItem> declared;
						std::string netMain;
						int declaredState;
						std::string gmtCreate;
						std::string userId;
						std::string gmtModify;
						long fwdEffect;
						std::string net;
						std::string netType;
					};
					std::vector<DataItem::Data> nets;
					long total;
					long num;
					long page;
				};


				QueryNetListResult();
				explicit QueryNetListResult(const std::string &payload);
				~QueryNetListResult();
				std::string getMessage()const;
				std::vector<DataItem> getData()const;
				long getCode()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				std::vector<DataItem> data_;
				long code_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DDOSDIVERSION_MODEL_QUERYNETLISTRESULT_H_