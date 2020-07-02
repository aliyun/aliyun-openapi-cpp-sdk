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

#ifndef ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_CREATENODETESTREQUEST_H_
#define ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_CREATENODETESTREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/dataworks-public/Dataworks_publicExport.h>

namespace AlibabaCloud
{
	namespace Dataworks_public
	{
		namespace Model
		{
			class ALIBABACLOUD_DATAWORKS_PUBLIC_EXPORT CreateNodeTestRequest : public RpcServiceRequest
			{

			public:
				CreateNodeTestRequest();
				~CreateNodeTestRequest();

				std::string getProjectEnv()const;
				void setProjectEnv(const std::string& projectEnv);
				bool getParallelism()const;
				void setParallelism(bool parallelism);
				std::string getBizBeginTime()const;
				void setBizBeginTime(const std::string& bizBeginTime);
				std::string getIncludeNodeIds()const;
				void setIncludeNodeIds(const std::string& includeNodeIds);
				std::string getBizdate()const;
				void setBizdate(const std::string& bizdate);
				std::string getBizEndTime()const;
				void setBizEndTime(const std::string& bizEndTime);
				std::string getName()const;
				void setName(const std::string& name);
				std::string getExcludeNodeIds()const;
				void setExcludeNodeIds(const std::string& excludeNodeIds);
				long getNodeId()const;
				void setNodeId(long nodeId);
				long getNodeProjectId()const;
				void setNodeProjectId(long nodeProjectId);

            private:
				std::string projectEnv_;
				bool parallelism_;
				std::string bizBeginTime_;
				std::string includeNodeIds_;
				std::string bizdate_;
				std::string bizEndTime_;
				std::string name_;
				std::string excludeNodeIds_;
				long nodeId_;
				long nodeProjectId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_CREATENODETESTREQUEST_H_