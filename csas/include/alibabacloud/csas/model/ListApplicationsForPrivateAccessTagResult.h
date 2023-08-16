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

#ifndef ALIBABACLOUD_CSAS_MODEL_LISTAPPLICATIONSFORPRIVATEACCESSTAGRESULT_H_
#define ALIBABACLOUD_CSAS_MODEL_LISTAPPLICATIONSFORPRIVATEACCESSTAGRESULT_H_

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
			class ALIBABACLOUD_CSAS_EXPORT ListApplicationsForPrivateAccessTagResult : public ServiceResult
			{
			public:
				struct Tag
				{
					struct Application
					{
						struct PortRange
						{
							int begin;
							int end;
						};
						std::string status;
						std::vector<std::string> addresses;
						std::string description;
						std::vector<Application::PortRange> portRanges;
						std::string createTime;
						std::string applicationId;
						std::string protocol;
						std::string name;
					};
					std::vector<Tag::Application> applications;
					std::string tagId;
				};


				ListApplicationsForPrivateAccessTagResult();
				explicit ListApplicationsForPrivateAccessTagResult(const std::string &payload);
				~ListApplicationsForPrivateAccessTagResult();
				std::vector<Tag> getTags()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<Tag> tags_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CSAS_MODEL_LISTAPPLICATIONSFORPRIVATEACCESSTAGRESULT_H_