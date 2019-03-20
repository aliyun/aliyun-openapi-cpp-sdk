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

#ifndef ALIBABACLOUD_CMS_MODEL_QUERYMETRICTOPREQUEST_H_
#define ALIBABACLOUD_CMS_MODEL_QUERYMETRICTOPREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/cms/CmsExport.h>

namespace AlibabaCloud
{
	namespace Cms
	{
		namespace Model
		{
			class ALIBABACLOUD_CMS_EXPORT QueryMetricTopRequest : public RpcServiceRequest
			{

			public:
				QueryMetricTopRequest();
				~QueryMetricTopRequest();

				std::string getPeriod()const;
				void setPeriod(const std::string& period);
				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getMetric()const;
				void setMetric(const std::string& metric);
				std::string getLength()const;
				void setLength(const std::string& length);
				std::string getProject()const;
				void setProject(const std::string& project);
				std::string getEndTime()const;
				void setEndTime(const std::string& endTime);
				std::string getOrderby()const;
				void setOrderby(const std::string& orderby);
				std::string getExpress()const;
				void setExpress(const std::string& express);
				std::string getStartTime()const;
				void setStartTime(const std::string& startTime);
				std::string getDimensions()const;
				void setDimensions(const std::string& dimensions);
				std::string getOrderDesc()const;
				void setOrderDesc(const std::string& orderDesc);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);

            private:
				std::string period_;
				long resourceOwnerId_;
				std::string metric_;
				std::string length_;
				std::string project_;
				std::string endTime_;
				std::string orderby_;
				std::string express_;
				std::string startTime_;
				std::string dimensions_;
				std::string orderDesc_;
				std::string accessKeyId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CMS_MODEL_QUERYMETRICTOPREQUEST_H_