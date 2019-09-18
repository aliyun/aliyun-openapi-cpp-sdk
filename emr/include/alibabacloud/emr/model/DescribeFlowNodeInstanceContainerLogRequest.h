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

#ifndef ALIBABACLOUD_EMR_MODEL_DESCRIBEFLOWNODEINSTANCECONTAINERLOGREQUEST_H_
#define ALIBABACLOUD_EMR_MODEL_DESCRIBEFLOWNODEINSTANCECONTAINERLOGREQUEST_H_

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
			class ALIBABACLOUD_EMR_EXPORT DescribeFlowNodeInstanceContainerLogRequest : public RpcServiceRequest
			{

			public:
				DescribeFlowNodeInstanceContainerLogRequest();
				~DescribeFlowNodeInstanceContainerLogRequest();

				int getOffset()const;
				void setOffset(int offset);
				std::string getLogName()const;
				void setLogName(const std::string& logName);
				int getLength()const;
				void setLength(int length);
				std::string getNodeInstanceId()const;
				void setNodeInstanceId(const std::string& nodeInstanceId);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getAppId()const;
				void setAppId(const std::string& appId);
				std::string getContainerId()const;
				void setContainerId(const std::string& containerId);
				std::string getProjectId()const;
				void setProjectId(const std::string& projectId);

            private:
				int offset_;
				std::string logName_;
				int length_;
				std::string nodeInstanceId_;
				std::string regionId_;
				std::string appId_;
				std::string containerId_;
				std::string projectId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EMR_MODEL_DESCRIBEFLOWNODEINSTANCECONTAINERLOGREQUEST_H_