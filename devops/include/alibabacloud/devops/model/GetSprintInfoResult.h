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

#ifndef ALIBABACLOUD_DEVOPS_MODEL_GETSPRINTINFORESULT_H_
#define ALIBABACLOUD_DEVOPS_MODEL_GETSPRINTINFORESULT_H_

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
			class ALIBABACLOUD_DEVOPS_EXPORT GetSprintInfoResult : public ServiceResult
			{
			public:
				struct Sprint
				{
					std::string status;
					std::string description;
					long gmtModified;
					std::string creator;
					long endDate;
					std::string name;
					std::vector<std::string> owners;
					long startDate;
					long gmtCreate;
					std::string identifier;
					std::string scope;
					std::string spaceIdentifier;
					std::string modifier;
				};


				GetSprintInfoResult();
				explicit GetSprintInfoResult(const std::string &payload);
				~GetSprintInfoResult();
				std::string getRequestId()const;
				Sprint getSprint()const;
				std::string getErrorCode()const;
				std::string getErrorMessage()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string requestId_;
				Sprint sprint_;
				std::string errorCode_;
				std::string errorMessage_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DEVOPS_MODEL_GETSPRINTINFORESULT_H_