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

#ifndef ALIBABACLOUD_DEVOPS_RDC_MODEL_GETTASKLISTFILTERRESULT_H_
#define ALIBABACLOUD_DEVOPS_RDC_MODEL_GETTASKLISTFILTERRESULT_H_

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
			class ALIBABACLOUD_DEVOPS_RDC_EXPORT GetTaskListFilterResult : public ServiceResult
			{
			public:
				struct Object
				{
					struct Task
					{
						struct WorkTime
						{
							int usedTime;
							int totalTime;
							std::string unit;
						};
						struct Badges
						{
							int likesCount;
							int commentsCount;
							int objectlinksCount;
							int attachmentsCount;
						};
						struct SubtaskCount
						{
							int done;
							int total;
						};
						struct Reminder
						{
							std::string type;
							std::string creatorId;
							std::vector<std::string> rules;
							std::string date;
							std::vector<std::string> members;
						};
						struct Creator
						{
							std::string avatarUrl;
							std::string id;
							std::string name;
						};
						struct Stage
						{
							std::string id;
							std::string name;
						};
						struct Executor
						{
							std::string avatarUrl;
							std::string id;
							std::string name;
						};
						struct TaskFlowStatus
						{
							int pos;
							std::string kind;
							std::string id;
							std::string taskFlowId;
							std::string name;
						};
						struct Customfield
						{
							struct ValueItem
							{
								std::string title;
								std::string id;
							};
							std::string customfieldId;
							std::string type;
							std::vector<Customfield::ValueItem> value;
							std::string values;
						};
						std::string untilDate;
						std::string recurrence;
						std::string sourceDate;
						std::vector<std::string> tagIds;
						std::string stageId;
						std::vector<std::string> involveMembers;
						Creator creator;
						std::string startDate;
						std::string executorId;
						Stage stage;
						SubtaskCount subtaskCount;
						std::vector<std::string> divisions;
						int likesCount;
						int uniqueId;
						std::string updated;
						int priority;
						int shareStatus;
						std::vector<std::string> labels;
						std::string storyPoint;
						bool isFavorite;
						std::string content;
						std::string note;
						std::vector<Task::Customfield> customfields;
						std::string sprint;
						std::string id;
						std::string accomplished;
						std::string taskId;
						std::string parent;
						std::string taskUniqueId;
						int rating;
						std::string sourceId;
						std::string taskListId;
						std::string sprintId;
						std::string organizationId;
						std::string source;
						std::string taskFlowStatusId;
						std::string created;
						std::string objectType;
						Executor executor;
						std::string visible;
						std::vector<std::string> ancestorIds;
						TaskFlowStatus taskFlowStatus;
						std::string dueDate;
						int progress;
						Reminder reminder;
						std::string scenariofFeldConfigId;
						std::string creatorId;
						std::string projectId;
						bool isDone;
						int attachmentsCount;
						WorkTime workTime;
						bool isArchived;
						bool isTopInProject;
						Badges badges;
						int commentsCount;
						int objectlinksCount;
					};
					std::string nextPageToken;
					int totalSize;
					std::vector<Task> result;
				};


				GetTaskListFilterResult();
				explicit GetTaskListFilterResult(const std::string &payload);
				~GetTaskListFilterResult();
				std::string getErrorMsg()const;
				Object getObject()const;
				std::string getErrorCode()const;
				std::string getSuccessful()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string errorMsg_;
				Object object_;
				std::string errorCode_;
				std::string successful_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DEVOPS_RDC_MODEL_GETTASKLISTFILTERRESULT_H_