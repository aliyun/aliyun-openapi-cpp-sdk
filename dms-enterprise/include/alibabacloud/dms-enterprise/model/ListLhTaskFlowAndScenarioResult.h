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

#ifndef ALIBABACLOUD_DMS_ENTERPRISE_MODEL_LISTLHTASKFLOWANDSCENARIORESULT_H_
#define ALIBABACLOUD_DMS_ENTERPRISE_MODEL_LISTLHTASKFLOWANDSCENARIORESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/dms-enterprise/Dms_enterpriseExport.h>

namespace AlibabaCloud
{
	namespace Dms_enterprise
	{
		namespace Model
		{
			class ALIBABACLOUD_DMS_ENTERPRISE_EXPORT ListLhTaskFlowAndScenarioResult : public ServiceResult
			{
			public:
				struct Dag
				{
					int status;
					int latestInstanceTime;
					bool isDeleted;
					long scenarioId;
					std::string creatorId;
					std::string dagOwnerId;
					long deployId;
					long spaceId;
					std::string dagName;
					std::string dagOwnerNickName;
					bool canEdit;
					int latestInstanceStatus;
					std::string demoId;
					long id;
					std::string creatorNickName;
					long dataFlowId;
				};
				struct ScenarioDAG
				{
					struct Scenario
					{
						std::string description;
						std::string creatorId;
						std::string scenarioName;
					};
					struct Dag1
					{
						int status;
						int latestInstanceTime;
						bool isDeleted;
						long scenarioId;
						std::string creatorId;
						std::string dagOwnerId;
						long deployId;
						long spaceId;
						std::string dagName;
						std::string dagOwnerNickName;
						bool canEdit;
						int latestInstanceStatus;
						std::string demoId;
						long id;
						std::string creatorNickName;
						long dataFlowId;
					};
					std::vector<ScenarioDAG::Dag1> dagList;
					Scenario scenario;
				};


				ListLhTaskFlowAndScenarioResult();
				explicit ListLhTaskFlowAndScenarioResult(const std::string &payload);
				~ListLhTaskFlowAndScenarioResult();
				std::vector<ScenarioDAG> getScenarioDAGList()const;
				std::string getErrorCode()const;
				std::string getErrorMessage()const;
				bool getSuccess()const;
				std::vector<Dag> getRawDAGList()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<ScenarioDAG> scenarioDAGList_;
				std::string errorCode_;
				std::string errorMessage_;
				bool success_;
				std::vector<Dag> rawDAGList_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DMS_ENTERPRISE_MODEL_LISTLHTASKFLOWANDSCENARIORESULT_H_