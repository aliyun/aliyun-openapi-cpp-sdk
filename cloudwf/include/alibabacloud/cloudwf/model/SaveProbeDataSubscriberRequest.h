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

#ifndef ALIBABACLOUD_CLOUDWF_MODEL_SAVEPROBEDATASUBSCRIBERREQUEST_H_
#define ALIBABACLOUD_CLOUDWF_MODEL_SAVEPROBEDATASUBSCRIBERREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/cloudwf/CloudwfExport.h>

namespace AlibabaCloud
{
	namespace Cloudwf
	{
		namespace Model
		{
			class ALIBABACLOUD_CLOUDWF_EXPORT SaveProbeDataSubscriberRequest : public RpcServiceRequest
			{

			public:
				SaveProbeDataSubscriberRequest();
				~SaveProbeDataSubscriberRequest();

				std::string getApiUrl()const;
				void setApiUrl(const std::string& apiUrl);
				std::string getParamGenScript()const;
				void setParamGenScript(const std::string& paramGenScript);
				std::string getName()const;
				void setName(const std::string& name);
				std::string getHttpMethod()const;
				void setHttpMethod(const std::string& httpMethod);
				std::string getDescription()const;
				void setDescription(const std::string& description);
				long getId()const;
				void setId(long id);
				int getType()const;
				void setType(int type);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::vector<long> getResourceIds()const;
				void setResourceIds(const std::vector<long>& resourceIds);

            private:
				std::string apiUrl_;
				std::string paramGenScript_;
				std::string name_;
				std::string httpMethod_;
				std::string description_;
				long id_;
				int type_;
				std::string accessKeyId_;
				std::vector<long> resourceIds_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CLOUDWF_MODEL_SAVEPROBEDATASUBSCRIBERREQUEST_H_