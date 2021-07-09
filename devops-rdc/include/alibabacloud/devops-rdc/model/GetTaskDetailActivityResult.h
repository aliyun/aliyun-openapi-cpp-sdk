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

#ifndef ALIBABACLOUD_DEVOPS_RDC_MODEL_GETTASKDETAILACTIVITYRESULT_H_
#define ALIBABACLOUD_DEVOPS_RDC_MODEL_GETTASKDETAILACTIVITYRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/devops-rdc/Devops_rdcExport.h>

namespace AlibabaCloud
{
	namespace Devops_rdc
	{
		namespace Model
		{
			class ALIBABACLOUD_DEVOPS_RDC_EXPORT GetTaskDetailActivityResult : public ServiceResult
			{
			public:
				struct Activity
				{
					std::string action;
					std::string updated;
					std::string content;
					std::string title;
					std::string created;
				};


				GetTaskDetailActivityResult();
				explicit GetTaskDetailActivityResult(const std::string &payload);
				~GetTaskDetailActivityResult();
				int getHttpStatusCode()const;
				std::string getErrorMsg()const;
				std::vector<Activity> getObject()const;
				std::string getErrorCode()const;
				bool getSuccessful()const;

			protected:
				void parse(const std::string &payload);
			private:
				int httpStatusCode_;
				std::string errorMsg_;
				std::vector<Activity> object_;
				std::string errorCode_;
				bool successful_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DEVOPS_RDC_MODEL_GETTASKDETAILACTIVITYRESULT_H_