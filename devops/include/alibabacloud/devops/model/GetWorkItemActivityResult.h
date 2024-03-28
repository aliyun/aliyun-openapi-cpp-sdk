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

#ifndef ALIBABACLOUD_DEVOPS_MODEL_GETWORKITEMACTIVITYRESULT_H_
#define ALIBABACLOUD_DEVOPS_MODEL_GETWORKITEMACTIVITYRESULT_H_

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
			class ALIBABACLOUD_DEVOPS_EXPORT GetWorkItemActivityResult : public ServiceResult
			{
			public:
				struct Activity
				{
					struct Property
					{
						std::string propertyName;
						std::string displayName;
						std::string propertyIdentifier;
						std::string propertyType;
					};
					struct OldValueItem
					{
						std::string displayValue;
						std::string plainValue;
						std::string resourceType;
					};
					struct NewValueItem
					{
						std::string displayValue;
						std::string plainValue;
						std::string resourceType;
					};
					std::vector<Activity::NewValueItem> newValue;
					std::string resourceIdentifier;
					std::string actionType;
					long parentEventId;
					std::string eventType;
					long eventTime;
					long eventId;
					std::string _operator;
					std::vector<Activity::OldValueItem> oldValue;
					Property property;
				};


				GetWorkItemActivityResult();
				explicit GetWorkItemActivityResult(const std::string &payload);
				~GetWorkItemActivityResult();
				std::string getRequestId()const;
				std::vector<Activity> getactivities()const;
				std::string getErrorMsg()const;
				std::string getErrorCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string requestId_;
				std::vector<Activity> activities_;
				std::string errorMsg_;
				std::string errorCode_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DEVOPS_MODEL_GETWORKITEMACTIVITYRESULT_H_