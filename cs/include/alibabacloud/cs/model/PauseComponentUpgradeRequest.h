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

#ifndef ALIBABACLOUD_CS_MODEL_PAUSECOMPONENTUPGRADEREQUEST_H_
#define ALIBABACLOUD_CS_MODEL_PAUSECOMPONENTUPGRADEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RoaServiceRequest.h>
#include <alibabacloud/cs/CSExport.h>

namespace AlibabaCloud
{
	namespace CS
	{
		namespace Model
		{
			class ALIBABACLOUD_CS_EXPORT PauseComponentUpgradeRequest : public RoaServiceRequest
			{

			public:
				PauseComponentUpgradeRequest();
				~PauseComponentUpgradeRequest();

				std::string getComponentid()const;
				void setComponentid(const std::string& componentid);
				std::string getClusterid()const;
				void setClusterid(const std::string& clusterid);

            private:
				std::string componentid_;
				std::string clusterid_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CS_MODEL_PAUSECOMPONENTUPGRADEREQUEST_H_