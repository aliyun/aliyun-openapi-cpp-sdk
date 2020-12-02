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

#ifndef ALIBABACLOUD_IDRSSERVICE_MODEL_GETDETECTIONRESULT_H_
#define ALIBABACLOUD_IDRSSERVICE_MODEL_GETDETECTIONRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/idrsservice/IdrsserviceExport.h>

namespace AlibabaCloud
{
	namespace Idrsservice
	{
		namespace Model
		{
			class ALIBABACLOUD_IDRSSERVICE_EXPORT GetDetectionResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct TasksItem
					{
						std::string status;
						std::string createdAt;
						std::string videoMetaUrl;
						std::string id;
						std::string videoUrl;
					};
					std::string status;
					std::vector<TasksItem> tasks;
					std::string recordingType;
					std::string createdAt;
					std::string ruleId;
					std::string departmentName;
					std::string departmentId;
					std::string id;
					std::string ruleName;
				};


				GetDetectionResult();
				explicit GetDetectionResult(const std::string &payload);
				~GetDetectionResult();
				std::string getMessage()const;
				Data getData()const;
				std::string getCode()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				Data data_;
				std::string code_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_IDRSSERVICE_MODEL_GETDETECTIONRESULT_H_