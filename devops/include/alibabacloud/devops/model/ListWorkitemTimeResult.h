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

#ifndef ALIBABACLOUD_DEVOPS_MODEL_LISTWORKITEMTIMERESULT_H_
#define ALIBABACLOUD_DEVOPS_MODEL_LISTWORKITEMTIMERESULT_H_

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
			class ALIBABACLOUD_DEVOPS_EXPORT ListWorkitemTimeResult : public ServiceResult
			{
			public:
				struct WorkitemTimeItem
				{
					long gmtStart;
					long gmtEnd;
					std::string workitemIdentifier;
					std::string type;
					long gmtCreate;
					std::string identifier;
					std::string description;
					float actualTime;
					long gmtModified;
					std::string recordUser;
				};


				ListWorkitemTimeResult();
				explicit ListWorkitemTimeResult(const std::string &payload);
				~ListWorkitemTimeResult();
				std::string getRequestId()const;
				std::string getErrorMsg()const;
				std::vector<WorkitemTimeItem> getworkitemTime()const;
				std::string getErrorCode()const;
				long getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string requestId_;
				std::string errorMsg_;
				std::vector<WorkitemTimeItem> workitemTime_;
				std::string errorCode_;
				long code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DEVOPS_MODEL_LISTWORKITEMTIMERESULT_H_