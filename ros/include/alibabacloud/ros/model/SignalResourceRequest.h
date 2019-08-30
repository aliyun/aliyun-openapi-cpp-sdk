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

#ifndef ALIBABACLOUD_ROS_MODEL_SIGNALRESOURCEREQUEST_H_
#define ALIBABACLOUD_ROS_MODEL_SIGNALRESOURCEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/ros/ROSExport.h>

namespace AlibabaCloud
{
	namespace ROS
	{
		namespace Model
		{
			class ALIBABACLOUD_ROS_EXPORT SignalResourceRequest : public RpcServiceRequest
			{

			public:
				SignalResourceRequest();
				~SignalResourceRequest();

				std::string getData()const;
				void setData(const std::string& data);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getClientToken()const;
				void setClientToken(const std::string& clientToken);
				std::string getStackId()const;
				void setStackId(const std::string& stackId);
				std::string getLogicalResourceId()const;
				void setLogicalResourceId(const std::string& logicalResourceId);
				std::string getUniqueId()const;
				void setUniqueId(const std::string& uniqueId);
				std::string getStatus()const;
				void setStatus(const std::string& status);

            private:
				std::string data_;
				std::string regionId_;
				std::string clientToken_;
				std::string stackId_;
				std::string logicalResourceId_;
				std::string uniqueId_;
				std::string status_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ROS_MODEL_SIGNALRESOURCEREQUEST_H_