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

#ifndef ALIBABACLOUD_EMR_MODEL_LISTSTACKSERVICERESULT_H_
#define ALIBABACLOUD_EMR_MODEL_LISTSTACKSERVICERESULT_H_

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
			class ALIBABACLOUD_EMR_EXPORT ListStackServiceResult : public ServiceResult
			{
			public:
				struct Service
				{
					struct Component
					{
						std::string componentDisplayName;
						std::string componentName;
					};
					std::string comment;
					std::string serviceName;
					std::string version;
					std::string displayName;
					std::string ecmVersion;
					std::vector<Service::Component> componentList;
				};


				ListStackServiceResult();
				explicit ListStackServiceResult(const std::string &payload);
				~ListStackServiceResult();
				std::vector<Service> getServiceList()const;
				std::string getStackName()const;
				std::string getStackVersion()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<Service> serviceList_;
				std::string stackName_;
				std::string stackVersion_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EMR_MODEL_LISTSTACKSERVICERESULT_H_