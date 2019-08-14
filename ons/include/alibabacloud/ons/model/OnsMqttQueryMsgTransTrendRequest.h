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

#ifndef ALIBABACLOUD_ONS_MODEL_ONSMQTTQUERYMSGTRANSTRENDREQUEST_H_
#define ALIBABACLOUD_ONS_MODEL_ONSMQTTQUERYMSGTRANSTRENDREQUEST_H_

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
			class ALIBABACLOUD_ONS_EXPORT OnsMqttQueryMsgTransTrendRequest : public RpcServiceRequest
			{

			public:
				OnsMqttQueryMsgTransTrendRequest();
				~OnsMqttQueryMsgTransTrendRequest();

				std::string getInstanceId()const;
				void setInstanceId(const std::string& instanceId);
				int getQos()const;
				void setQos(int qos);
				std::string getTransType()const;
				void setTransType(const std::string& transType);
				long getEndTime()const;
				void setEndTime(long endTime);
				long getBeginTime()const;
				void setBeginTime(long beginTime);
				std::string getTpsType()const;
				void setTpsType(const std::string& tpsType);
				std::string getParentTopic()const;
				void setParentTopic(const std::string& parentTopic);
				std::string getMsgType()const;
				void setMsgType(const std::string& msgType);
				std::string getSubTopic()const;
				void setSubTopic(const std::string& subTopic);

            private:
				std::string instanceId_;
				int qos_;
				std::string transType_;
				long endTime_;
				long beginTime_;
				std::string tpsType_;
				std::string parentTopic_;
				std::string msgType_;
				std::string subTopic_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ONS_MODEL_ONSMQTTQUERYMSGTRANSTRENDREQUEST_H_