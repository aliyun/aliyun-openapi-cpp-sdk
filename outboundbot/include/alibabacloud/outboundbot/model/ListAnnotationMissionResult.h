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

#ifndef ALIBABACLOUD_OUTBOUNDBOT_MODEL_LISTANNOTATIONMISSIONRESULT_H_
#define ALIBABACLOUD_OUTBOUNDBOT_MODEL_LISTANNOTATIONMISSIONRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/outboundbot/OutboundBotExport.h>

namespace AlibabaCloud
{
	namespace OutboundBot
	{
		namespace Model
		{
			class ALIBABACLOUD_OUTBOUNDBOT_EXPORT ListAnnotationMissionResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct AnnotationMissionListItem
					{
						long conversationTimeStartFilter;
						long conversationTimeEndFilter;
						std::string samplingDescription;
						std::string instanceId;
						long createTime;
						int samplingType;
						int samplingRate;
						int annotationStatus;
						std::vector<std::string> annotationMissionDebugDataSourceList;
						int samplingCount;
						long finishTime;
						int sessionTotalCount;
						std::string annotationMissionId;
						int annotationMissionDataSourceType;
						bool excludeOtherMissionSession;
						std::vector<std::string> sessionEndReasonFilterList;
						std::string annotationMissionName;
						int sessionFinishCount;
					};
					long totalPageCount;
					long totalCount;
					long pageSize;
					std::string message;
					long pageIndex;
					std::vector<AnnotationMissionListItem> annotationMissionList;
					bool success;
				};


				ListAnnotationMissionResult();
				explicit ListAnnotationMissionResult(const std::string &payload);
				~ListAnnotationMissionResult();
				std::string getMessage()const;
				int getHttpStatusCode()const;
				Data getData()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				int httpStatusCode_;
				Data data_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_OUTBOUNDBOT_MODEL_LISTANNOTATIONMISSIONRESULT_H_