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

#ifndef ALIBABACLOUD_DDOSDIVERSION_MODEL_LISTINSTANCERESULT_H_
#define ALIBABACLOUD_DDOSDIVERSION_MODEL_LISTINSTANCERESULT_H_

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
			class ALIBABACLOUD_DDOSDIVERSION_EXPORT ListInstanceResult : public ServiceResult
			{
			public:
				struct DataItem
				{
					struct Data
					{
						struct Spec
						{
							std::string diversionType;
							std::string normalBandwidth;
							std::string mitigationAnalysisCapacity;
							std::string mitigationNums;
							std::string mitigationAnalysis;
							std::string mitigationCapacity;
							std::string coverage;
							std::string idcNumbers;
							std::string edition;
							std::string ipSubnetNums;
							std::string initialInstallation;
							std::string initialQty;
						};
						std::string status;
						std::string comment;
						std::string gmtCreate;
						std::string message;
						std::string instanceId;
						std::string userId;
						std::string gmtExpire;
						std::string gmtModify;
						std::string saleId;
						Spec spec;
						std::string name;
					};
					std::vector<DataItem::Data> instances;
					long total;
					long num;
					long page;
				};


				ListInstanceResult();
				explicit ListInstanceResult(const std::string &payload);
				~ListInstanceResult();
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
#endif // !ALIBABACLOUD_DDOSDIVERSION_MODEL_LISTINSTANCERESULT_H_