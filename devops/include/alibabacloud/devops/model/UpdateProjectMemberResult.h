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

#ifndef ALIBABACLOUD_DEVOPS_MODEL_UPDATEPROJECTMEMBERRESULT_H_
#define ALIBABACLOUD_DEVOPS_MODEL_UPDATEPROJECTMEMBERRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/devops/DevopsExport.h>

namespace AlibabaCloud
{
	namespace Devops
	{
		namespace Model
		{
			class ALIBABACLOUD_DEVOPS_EXPORT UpdateProjectMemberResult : public ServiceResult
			{
			public:
				struct Member
				{
					long gmtCreate;
					std::string targetIdentifier;
					std::string targetType;
					long gmtModified;
					std::string id;
					std::string userIdentifier;
					std::string userType;
					std::string roleIdentifier;
				};


				UpdateProjectMemberResult();
				explicit UpdateProjectMemberResult(const std::string &payload);
				~UpdateProjectMemberResult();
				std::string getRequestId()const;
				std::string getErrorMsg()const;
				std::string getErrorCode()const;
				Member getMember()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string requestId_;
				std::string errorMsg_;
				std::string errorCode_;
				Member member_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DEVOPS_MODEL_UPDATEPROJECTMEMBERRESULT_H_