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

#ifndef ALIBABACLOUD_EMR_MODEL_DESCRIBEFLOWNODEINSTANCELAUNCHERLOGREQUEST_H_
#define ALIBABACLOUD_EMR_MODEL_DESCRIBEFLOWNODEINSTANCELAUNCHERLOGREQUEST_H_

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
			class ALIBABACLOUD_EMR_EXPORT DescribeFlowNodeInstanceLauncherLogRequest : public RpcServiceRequest
			{

			public:
				DescribeFlowNodeInstanceLauncherLogRequest();
				~DescribeFlowNodeInstanceLauncherLogRequest();

				int getOffset()const;
				void setOffset(int offset);
				int getStart()const;
				void setStart(int start);
				int getLength()const;
				void setLength(int length);
				long getEndTime()const;
				void setEndTime(long endTime);
				long getStartTime()const;
				void setStartTime(long startTime);
				bool getReverse()const;
				void setReverse(bool reverse);
				std::string getNodeInstanceId()const;
				void setNodeInstanceId(const std::string& nodeInstanceId);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				int getLines()const;
				void setLines(int lines);
				std::string getProjectId()const;
				void setProjectId(const std::string& projectId);

            private:
				int offset_;
				int start_;
				int length_;
				long endTime_;
				long startTime_;
				bool reverse_;
				std::string nodeInstanceId_;
				std::string regionId_;
				int lines_;
				std::string projectId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EMR_MODEL_DESCRIBEFLOWNODEINSTANCELAUNCHERLOGREQUEST_H_