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

#ifndef ALIBABACLOUD_CAS_MODEL_GETCAINSTANCESTATUSRESULT_H_
#define ALIBABACLOUD_CAS_MODEL_GETCAINSTANCESTATUSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/cas/CasExport.h>

namespace AlibabaCloud
{
	namespace Cas
	{
		namespace Model
		{
			class ALIBABACLOUD_CAS_EXPORT GetCAInstanceStatusResult : public ServiceResult
			{
			public:
				struct InstanceStatus
				{
					std::string status;
					std::string type;
					std::string identifier;
					std::string instanceId;
					long beforeTime;
					long useExpireTime;
					long afterTime;
					int certTotalCount;
					int certIssuedCount;
				};


				GetCAInstanceStatusResult();
				explicit GetCAInstanceStatusResult(const std::string &payload);
				~GetCAInstanceStatusResult();
				std::vector<InstanceStatus> getInstanceStatusList()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<InstanceStatus> instanceStatusList_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CAS_MODEL_GETCAINSTANCESTATUSRESULT_H_