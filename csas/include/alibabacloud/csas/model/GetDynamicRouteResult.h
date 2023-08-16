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

#ifndef ALIBABACLOUD_CSAS_MODEL_GETDYNAMICROUTERESULT_H_
#define ALIBABACLOUD_CSAS_MODEL_GETDYNAMICROUTERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/csas/CsasExport.h>

namespace AlibabaCloud
{
	namespace Csas
	{
		namespace Model
		{
			class ALIBABACLOUD_CSAS_EXPORT GetDynamicRouteResult : public ServiceResult
			{
			public:
				struct DynamicRoute
				{
					std::string status;
					std::string applicationType;
					std::string description;
					std::vector<std::string> tagIds;
					std::vector<std::string> regionIds;
					int priority;
					std::string nextHop;
					std::vector<std::string> applicationIds;
					std::string createTime;
					std::string dynamicRouteId;
					std::string dynamicRouteType;
					std::string name;
				};


				GetDynamicRouteResult();
				explicit GetDynamicRouteResult(const std::string &payload);
				~GetDynamicRouteResult();
				DynamicRoute getDynamicRoute()const;

			protected:
				void parse(const std::string &payload);
			private:
				DynamicRoute dynamicRoute_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CSAS_MODEL_GETDYNAMICROUTERESULT_H_