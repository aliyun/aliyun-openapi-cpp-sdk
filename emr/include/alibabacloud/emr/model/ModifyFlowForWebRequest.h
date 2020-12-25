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

#ifndef ALIBABACLOUD_EMR_MODEL_MODIFYFLOWFORWEBREQUEST_H_
#define ALIBABACLOUD_EMR_MODEL_MODIFYFLOWFORWEBREQUEST_H_

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
			class ALIBABACLOUD_EMR_EXPORT ModifyFlowForWebRequest : public RpcServiceRequest
			{

			public:
				ModifyFlowForWebRequest();
				~ModifyFlowForWebRequest();

				std::string getCronExpr()const;
				void setCronExpr(const std::string& cronExpr);
				bool getPeriodic()const;
				void setPeriodic(bool periodic);
				std::string getDescription()const;
				void setDescription(const std::string& description);
				std::string getAlertUserGroupBizId()const;
				void setAlertUserGroupBizId(const std::string& alertUserGroupBizId);
				std::string getLifecycle()const;
				void setLifecycle(const std::string& lifecycle);
				std::string getHostName()const;
				void setHostName(const std::string& hostName);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				bool getCreateCluster()const;
				void setCreateCluster(bool createCluster);
				long getEndSchedule()const;
				void setEndSchedule(long endSchedule);
				std::string getId()const;
				void setId(const std::string& id);
				std::string getAlertConf()const;
				void setAlertConf(const std::string& alertConf);
				std::string getProjectId()const;
				void setProjectId(const std::string& projectId);
				std::string getParentFlowList()const;
				void setParentFlowList(const std::string& parentFlowList);
				std::string getLogArchiveLocation()const;
				void setLogArchiveLocation(const std::string& logArchiveLocation);
				std::string getAlertDingDingGroupBizId()const;
				void setAlertDingDingGroupBizId(const std::string& alertDingDingGroupBizId);
				long getStartSchedule()const;
				void setStartSchedule(long startSchedule);
				std::string getClusterId()const;
				void setClusterId(const std::string& clusterId);
				std::string getGraph()const;
				void setGraph(const std::string& graph);
				std::string getName()const;
				void setName(const std::string& name);
				std::string get_Namespace()const;
				void set_Namespace(const std::string& _namespace);
				std::string getStatus()const;
				void setStatus(const std::string& status);
				std::string getParentCategory()const;
				void setParentCategory(const std::string& parentCategory);

            private:
				std::string cronExpr_;
				bool periodic_;
				std::string description_;
				std::string alertUserGroupBizId_;
				std::string lifecycle_;
				std::string hostName_;
				std::string regionId_;
				bool createCluster_;
				long endSchedule_;
				std::string id_;
				std::string alertConf_;
				std::string projectId_;
				std::string parentFlowList_;
				std::string logArchiveLocation_;
				std::string alertDingDingGroupBizId_;
				long startSchedule_;
				std::string clusterId_;
				std::string graph_;
				std::string name_;
				std::string _namespace_;
				std::string status_;
				std::string parentCategory_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EMR_MODEL_MODIFYFLOWFORWEBREQUEST_H_