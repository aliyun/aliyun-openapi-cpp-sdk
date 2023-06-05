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

#ifndef ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_LISTBASELINESRESULT_H_
#define ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_LISTBASELINESRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/dataworks-public/Dataworks_publicExport.h>

namespace AlibabaCloud
{
	namespace Dataworks_public
	{
		namespace Model
		{
			class ALIBABACLOUD_DATAWORKS_PUBLIC_EXPORT ListBaselinesResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct BaselinesItem
					{
						struct OverTimeSettingsItem
						{
							std::string time;
							int cycle;
						};
						long baselineId;
						std::string owner;
						std::string baselineType;
						int priority;
						long projectId;
						std::string baselineName;
						bool enabled;
						bool alertEnabled;
						std::vector<BaselinesItem::OverTimeSettingsItem> overTimeSettings;
						int alertMarginThreshold;
					};
					std::string totalCount;
					std::string pageSize;
					std::string pageNumber;
					std::vector<BaselinesItem> baselines;
				};


				ListBaselinesResult();
				explicit ListBaselinesResult(const std::string &payload);
				~ListBaselinesResult();
				int getHttpStatusCode()const;
				Data getData()const;
				std::string getErrorCode()const;
				std::string getErrorMessage()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				int httpStatusCode_;
				Data data_;
				std::string errorCode_;
				std::string errorMessage_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_LISTBASELINESRESULT_H_