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

#ifndef ALIBABACLOUD_IOT_MODEL_LISTANALYTICSDATAREQUEST_H_
#define ALIBABACLOUD_IOT_MODEL_LISTANALYTICSDATAREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/iot/IotExport.h>

namespace AlibabaCloud
{
	namespace Iot
	{
		namespace Model
		{
			class ALIBABACLOUD_IOT_EXPORT ListAnalyticsDataRequest : public RpcServiceRequest
			{
			public:
				struct Condition
				{
					std::string fieldName;
					std::string operate;
					std::string betweenStart;
					std::string betweenEnd;
					std::string value;
				};

			public:
				ListAnalyticsDataRequest();
				~ListAnalyticsDataRequest();

				int getPageNum()const;
				void setPageNum(int pageNum);
				std::string getIotInstanceId()const;
				void setIotInstanceId(const std::string& iotInstanceId);
				int getPageSize()const;
				void setPageSize(int pageSize);
				std::string getIsoId()const;
				void setIsoId(const std::string& isoId);
				std::string getApiPath()const;
				void setApiPath(const std::string& apiPath);
				std::vector<Condition> getCondition()const;
				void setCondition(const std::vector<Condition>& condition);
				std::string getApiProduct()const;
				void setApiProduct(const std::string& apiProduct);
				std::string getApiRevision()const;
				void setApiRevision(const std::string& apiRevision);

            private:
				int pageNum_;
				std::string iotInstanceId_;
				int pageSize_;
				std::string isoId_;
				std::string apiPath_;
				std::vector<Condition> condition_;
				std::string apiProduct_;
				std::string apiRevision_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_IOT_MODEL_LISTANALYTICSDATAREQUEST_H_