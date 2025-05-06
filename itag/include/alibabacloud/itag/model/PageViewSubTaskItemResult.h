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

#ifndef ALIBABACLOUD_ITAG_MODEL_PAGEVIEWSUBTASKITEMRESULT_H_
#define ALIBABACLOUD_ITAG_MODEL_PAGEVIEWSUBTASKITEMRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/itag/ItagExport.h>

namespace AlibabaCloud
{
	namespace Itag
	{
		namespace Model
		{
			class ALIBABACLOUD_ITAG_EXPORT PageViewSubTaskItemResult : public ServiceResult
			{
			public:
				struct Result
				{
					struct TaskInfo
					{
						struct BizInfo
						{
							std::string bizClassify;
							std::string bizNo;
							std::string bizCode;
						};
						long safetyLevel;
						BizInfo bizInfo;
						std::string taskId;
						std::string taskName;
						std::string taskType;
						std::string channel;
					};
					struct SubTask
					{
						std::string subTaskId;
					};
					struct SubUserTask
					{
						struct Handler
						{
							std::string userName;
							std::string accountNo;
							std::string userId;
							std::string accountType;
						};
						std::string subTaskId;
						long voteIdx;
						long rejectFlag;
						std::string gmtTimeout;
						std::string state;
						std::string userSubTaskId;
						std::string workNode;
						Handler handler;
						std::string operateFlag;
						std::string rejectRemark;
						std::string externalBizNo;
						std::string lastUserSubTaskId;
					};
					struct OptionTemplate
					{
						struct ViewConfigs
						{
							struct FieldsItem
							{
								bool hide;
								std::string type;
								std::vector<std::string> relationQuestionIds;
								std::string fieldName;
								bool corsProxy;
								std::string visitInfo;
								std::string convertor;
								std::string plugins;
							};
							std::vector<FieldsItem> fields;
						};
						struct QuestionConfigsItem
						{
							struct QuestionOption
							{
								std::vector<std::string> children1;
								std::string shortcut;
								std::string color;
								std::string label;
								std::string value;
								std::string key;
							};
							struct TemplateRobotConfig
							{
								struct RobotParam
								{
									std::string dataField;
									bool mustFill;
									std::string defaultResult;
									std::string paramName;
									std::string serviceId;
								};
								std::string type;
								std::string questionId;
								std::string robotId;
								std::string resultPath;
								std::vector<TemplateRobotConfig::RobotParam> params;
								std::string stage;
								std::string defaultResult;
							};
							std::vector<QuestionConfigsItem::QuestionOption> options;
							std::string markTitleAlias;
							std::vector<QuestionConfigsItem::TemplateRobotConfig> robotConfigs;
							std::string selectGroup;
							std::string exif;
							std::string type;
							bool mustFill;
							std::vector<std::string> preOptions;
							std::string id;
							bool selected;
							std::string rule;
							std::vector<std::string> children;
							std::string defaultResult;
							std::string markTitle;
							bool display;
						};
						long status;
						std::string description;
						ViewConfigs viewConfigs;
						std::string classify;
						std::string tntInstId;
						std::string gmtModified;
						std::vector<std::string> abandonReasons;
						std::string name;
						std::string exif;
						std::string gmtCreate;
						std::string type;
						std::vector<QuestionConfigsItem> questionConfigs;
						std::string id;
						std::string sharedMode;
						std::vector<std::string> tags;
					};
					struct MarkItemList
					{
						struct MarkResultListItem
						{
							std::string markResult;
							std::string userMarkResultId;
							std::string questionId;
							std::string version;
							std::string resultType;
							std::string markResultId;
							std::string markTitle;
						};
						long rejectFlag;
						std::string markItemId;
						std::string dataId;
						std::string state;
						std::string dataMeta;
						long mine;
						long abandonFlag;
						long fixedFlag;
						std::vector<MarkItemList::MarkResultListItem> markResultList;
						long weight;
						std::string datasetId;
					};
					TaskInfo taskInfo;
					SubUserTask subUserTask;
					long totalPage;
					int pageNum;
					int pageSize;
					long total;
					OptionTemplate optionTemplate;
					std::vector<MarkItemList> list;
					SubTask subTask;
				};


				PageViewSubTaskItemResult();
				explicit PageViewSubTaskItemResult(const std::string &payload);
				~PageViewSubTaskItemResult();
				std::string getMsg()const;
				bool getSucc()const;
				std::string getErrorCode()const;
				std::string getErrInfo()const;
				std::string getCode()const;
				Result getResult()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string msg_;
				bool succ_;
				std::string errorCode_;
				std::string errInfo_;
				std::string code_;
				Result result_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ITAG_MODEL_PAGEVIEWSUBTASKITEMRESULT_H_