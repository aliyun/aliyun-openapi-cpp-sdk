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

#ifndef ALIBABACLOUD_EMR_MODEL_LISTCOMPONENTINSTANCESRESULT_H_
#define ALIBABACLOUD_EMR_MODEL_LISTCOMPONENTINSTANCESRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/emr/EmrExport.h>

namespace AlibabaCloud
{
	namespace Emr
	{
		namespace Model
		{
			class ALIBABACLOUD_EMR_EXPORT ListComponentInstancesResult : public ServiceResult
			{
			public:
				struct ComponentInstance
				{
					std::string componentInstanceStatus;
					std::string applicationName;
					std::string nodeName;
					std::string desiredState;
					std::string componentInstanceId;
					long createTime;
					std::string maintenanceState;
					std::string nodeId;
					std::string componentInstanceState;
					std::string componentName;
					std::string bizState;
					std::string commissionState;
				};


				ListComponentInstancesResult();
				explicit ListComponentInstancesResult(const std::string &payload);
				~ListComponentInstancesResult();
				int getTotalCount()const;
				std::string getNextToken()const;
				std::vector<ComponentInstance> getComponentInstances()const;
				int getMaxResults()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				std::string nextToken_;
				std::vector<ComponentInstance> componentInstances_;
				int maxResults_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EMR_MODEL_LISTCOMPONENTINSTANCESRESULT_H_