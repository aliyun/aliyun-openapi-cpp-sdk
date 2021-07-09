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

#ifndef ALIBABACLOUD_DEVOPS_RDC_MODEL_GETTASKDETAILBASERESULT_H_
#define ALIBABACLOUD_DEVOPS_RDC_MODEL_GETTASKDETAILBASERESULT_H_

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
			class ALIBABACLOUD_DEVOPS_RDC_EXPORT GetTaskDetailBaseResult : public ServiceResult
			{
			public:
				struct Object
				{
					struct Scenariofieldconfig
					{
						std::string icon;
						std::string id;
						std::string proTemplateConfigType;
						std::string name;
					};
					struct Executor
					{
						std::string avatarUrl;
						std::string id;
						std::string name;
					};
					struct Tasklist
					{
						std::string title;
						std::string id;
					};
					struct Taskflowstatus
					{
						std::string taskflowId;
						std::string kind;
						std::string id;
						std::string name;
					};
					struct Creator
					{
						std::string id;
						std::string name;
					};
					struct Reminder
					{
						std::string type;
						std::string creatorId;
						std::string method;
						std::vector<std::string> memberRoles;
						std::vector<std::string> rules;
						std::string date;
						std::vector<std::string> members;
					};
					struct SubtaskCount
					{
						int done;
						int total;
					};
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
					struct Stage
					{
						std::string id;
						std::string name;
					};
					struct Customfield
					{
						struct ValueInfo
						{
							std::string title;
							std::string id;
						};
						std::string customfieldId;
						std::string type;
						std::vector<Customfield::ValueInfo> value;
						std::vector<std::string> values;
					};
					struct Subtask
					{
						std::string content;
						std::string id;
					};
					struct Involver
					{
						std::string id;
						std::string name;
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
					Tasklist tasklist;
					std::string content;
					std::string note;
					std::vector<Customfield> customfields;
					std::string scenariofieldconfigId;
					std::string sprint;
					std::string id;
					std::string organization;
					std::string accomplished;
					std::string taskId;
					std::string parent;
					int rating;
					std::string sourceId;
					std::string sprintId;
					std::string organizationId;
					std::string source;
					std::string created;
					std::string objectType;
					Executor executor;
					std::string visible;
					std::vector<std::string> ancestorIds;
					std::string dueDate;
					Taskflowstatus taskflowstatus;
					int progress;
					Reminder reminder;
					std::string creatorId;
					std::vector<Subtask> subtasks;
					std::string projectId;
					std::vector<Involver> involvers;
					std::string taskflowstatusId;
					bool isDone;
					std::vector<std::string> ancestors;
					int attachmentsCount;
					WorkTime workTime;
					bool isArchived;
					bool isTopInProject;
					Badges badges;
					int commentsCount;
					Scenariofieldconfig scenariofieldconfig;
					int objectlinksCount;
				};


				GetTaskDetailBaseResult();
				explicit GetTaskDetailBaseResult(const std::string &payload);
				~GetTaskDetailBaseResult();
				std::string getErrorMsg()const;
				Object getObject()const;
				std::string getErrorCode()const;
				bool getSuccessful()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string errorMsg_;
				Object object_;
				std::string errorCode_;
				bool successful_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DEVOPS_RDC_MODEL_GETTASKDETAILBASERESULT_H_