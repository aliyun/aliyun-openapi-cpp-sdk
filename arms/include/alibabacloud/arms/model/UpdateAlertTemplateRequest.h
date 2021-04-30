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

#ifndef ALIBABACLOUD_ARMS_MODEL_UPDATEALERTTEMPLATEREQUEST_H_
#define ALIBABACLOUD_ARMS_MODEL_UPDATEALERTTEMPLATEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/arms/ARMSExport.h>

namespace AlibabaCloud
{
	namespace ARMS
	{
		namespace Model
		{
			class ALIBABACLOUD_ARMS_EXPORT UpdateAlertTemplateRequest : public RpcServiceRequest
			{

			public:
				UpdateAlertTemplateRequest();
				~UpdateAlertTemplateRequest();

				std::string getAnnotations()const;
				void setAnnotations(const std::string& annotations);
				std::string getRule()const;
				void setRule(const std::string& rule);
				std::string getProxyUserId()const;
				void setProxyUserId(const std::string& proxyUserId);
				std::string getType()const;
				void setType(const std::string& type);
				std::string getMessage()const;
				void setMessage(const std::string& message);
				std::string getLabels()const;
				void setLabels(const std::string& labels);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getName()const;
				void setName(const std::string& name);
				long getId()const;
				void setId(long id);
				std::string getMatchExpressions()const;
				void setMatchExpressions(const std::string& matchExpressions);
				bool getStatus()const;
				void setStatus(bool status);

            private:
				std::string annotations_;
				std::string rule_;
				std::string proxyUserId_;
				std::string type_;
				std::string message_;
				std::string labels_;
				std::string regionId_;
				std::string name_;
				long id_;
				std::string matchExpressions_;
				bool status_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ARMS_MODEL_UPDATEALERTTEMPLATEREQUEST_H_