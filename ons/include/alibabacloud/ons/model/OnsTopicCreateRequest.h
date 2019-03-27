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

#ifndef ALIBABACLOUD_ONS_MODEL_ONSTOPICCREATEREQUEST_H_
#define ALIBABACLOUD_ONS_MODEL_ONSTOPICCREATEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/ons/OnsExport.h>

namespace AlibabaCloud
{
	namespace Ons
	{
		namespace Model
		{
			class ALIBABACLOUD_ONS_EXPORT OnsTopicCreateRequest : public RpcServiceRequest
			{

			public:
				OnsTopicCreateRequest();
				~OnsTopicCreateRequest();

				long getPreventCache()const;
				void setPreventCache(long preventCache);
				std::string getInstanceId()const;
				void setInstanceId(const std::string& instanceId);
				int getMessageType()const;
				void setMessageType(int messageType);
				std::string getTopic()const;
				void setTopic(const std::string& topic);
				std::string getRemark()const;
				void setRemark(const std::string& remark);

            private:
				long preventCache_;
				std::string instanceId_;
				int messageType_;
				std::string topic_;
				std::string remark_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ONS_MODEL_ONSTOPICCREATEREQUEST_H_