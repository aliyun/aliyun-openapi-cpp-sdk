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

#ifndef ALIBABACLOUD_EMR_MODEL_RUNAPPLICATIONACTIONREQUEST_H_
#define ALIBABACLOUD_EMR_MODEL_RUNAPPLICATIONACTIONREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/emr/EmrExport.h>

namespace AlibabaCloud
{
	namespace Emr
	{
		namespace Model
		{
			class ALIBABACLOUD_EMR_EXPORT RunApplicationActionRequest : public RpcServiceRequest
			{

			public:
				RunApplicationActionRequest();
				~RunApplicationActionRequest();

				std::string getClientToken()const;
				void setClientToken(const std::string& clientToken);
				std::string getDescription()const;
				void setDescription(const std::string& description);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getExecuteStrategy()const;
				void setExecuteStrategy(const std::string& executeStrategy);
				int getNodeCountPerBatch()const;
				void setNodeCountPerBatch(int nodeCountPerBatch);
				Struct getComponentInstanceSelector()const;
				void setComponentInstanceSelector(const Struct& componentInstanceSelector);
				bool getRollingExecute()const;
				void setRollingExecute(bool rollingExecute);
				std::string getClusterId()const;
				void setClusterId(const std::string& clusterId);
				std::string getActionName()const;
				void setActionName(const std::string& actionName);
				std::string getCommand()const;
				void setCommand(const std::string& command);
				long getInterval()const;
				void setInterval(long interval);
				Array getCustomParams()const;
				void setCustomParams(const Array& customParams);
				std::string getSystemDebug()const;
				void setSystemDebug(const std::string& systemDebug);

            private:
				std::string clientToken_;
				std::string description_;
				std::string regionId_;
				std::string executeStrategy_;
				int nodeCountPerBatch_;
				Struct componentInstanceSelector_;
				bool rollingExecute_;
				std::string clusterId_;
				std::string actionName_;
				std::string command_;
				long interval_;
				Array customParams_;
				std::string systemDebug_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EMR_MODEL_RUNAPPLICATIONACTIONREQUEST_H_