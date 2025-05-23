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

#ifndef ALIBABACLOUD_ITAG_MODEL_POLLINGSAMPLEMARKITEMSRESULT_H_
#define ALIBABACLOUD_ITAG_MODEL_POLLINGSAMPLEMARKITEMSRESULT_H_

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
			class ALIBABACLOUD_ITAG_EXPORT PollingSampleMarkItemsResult : public ServiceResult
			{
			public:
				struct Result
				{
					struct ITagMarkableWorkTaskDTO
					{
						struct TaskInfo
						{
							struct BizInfo
							{
								std::string bizClassify;
								std::string bizNo;
								std::string bizCode;
							};
							int safetyLevel;
							BizInfo bizInfo;
							std::string taskId;
							std::string taskName;
							std::string taskType;
							std::string channel;
						};
						struct SubTask
						{
							struct Handler
							{
								std::string userName;
								std::string accountNo;
								std::string userId;
								std::string accountType;
							};
							std::string subTaskId;
							std::string taskId;
							Handler handler;
						};
						struct SubUserTask
						{
							struct Handler1
							{
								std::string userName;
								std::string accountNo;
								std::string userId;
								std::string accountType;
							};
							std::string subTaskId;
							int voteIdx;
							int rejectFlag;
							std::string gmtTimeout;
							std::string state;
							std::string userSubTaskId;
							std::string workNode;
							std::string operateFlag;
							Handler1 handler1;
							std::string rejectRemark;
							std::string externalBizNo;
							std::string lastUserSubTaskId;
						};
						struct OptionTemplate
						{
							struct ViewConfigs
							{
								struct DisplayFieldDTO
								{
									struct VisitInfo
									{
										struct OssConf
										{
											std::string ossOwner;
											std::string ossEndpoint;
											std::string ossAk;
											long expiredTime;
											std::string ossBucket;
											std::string folder;
											std::string ossAs;
										};
										struct AftsConf
										{
											int expiredTime;
										};
										AftsConf aftsConf;
										OssConf ossConf;
									};
									bool hide;
									std::string type;
									std::string fieldNames;
									std::vector<std::string> relationQuestionIds;
									std::string fieldName;
									bool corsProxy;
									VisitInfo visitInfo;
									std::string convertor;
									std::string plugins;
								};
								std::vector<DisplayFieldDTO> fields;
							};
							struct Creator
							{
								std::string userName;
								std::string accountNo;
								std::string userId;
								std::string accountType;
							};
							struct Modifier
							{
								std::string userName;
								std::string accountNo;
								std::string userId;
								std::string accountType;
							};
							struct RobotConfig
							{
								struct EffectStep
								{
									struct ProcessConfig
									{
										std::vector<std::string> relateColumn;
									};
									ProcessConfig processConfig;
									bool preProcess;
									bool label;
									bool preLabel;
								};
								struct ModelServiceConfig
								{
									struct ModelServiceConfig$PostParamPair
									{
										std::string value;
										std::string key;
									};
									struct ModelServiceConfig$ResultMappingPair
									{
										std::string questionId;
										std::string markTitle;
										std::string resultKey;
									};
									std::string serviceName;
									std::vector<ModelServiceConfig::ModelServiceConfig$ResultMappingPair> resultMappings;
									std::vector<ModelServiceConfig::ModelServiceConfig$PostParamPair> postParams;
									std::string serviceId;
								};
								std::vector<ModelServiceConfig> modelServiceConfigs;
								EffectStep effectStep;
								std::string source;
							};
							struct QuestionConfigDTO
							{
								struct QuestionOption
								{
									std::vector<std::string> children2;
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
								std::vector<QuestionConfigDTO::QuestionOption> options;
								std::string markTitleAlias;
								std::vector<QuestionConfigDTO::TemplateRobotConfig> robotConfigs;
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
							int status;
							std::string description;
							ViewConfigs viewConfigs;
							std::string classify;
							std::string tntInstId;
							std::string gmtModified;
							RobotConfig robotConfig;
							std::vector<std::string> abandonReasons;
							Creator creator;
							std::string name;
							std::string exif;
							std::string type;
							std::string gmtCreate;
							std::vector<QuestionConfigDTO> questionConfigs;
							std::string id;
							std::string sharedMode;
							Modifier modifier;
							std::vector<std::string> tags;
						};
						struct ITagSimpleUserMarkItemDTO
						{
							struct ITagSimpleUserMarkResultDTO
							{
								std::string markResult;
								std::string userMarkResultId;
								std::string questionId;
								std::string version;
								std::string resultType;
								std::string markResultId;
								std::string markTitle;
							};
							std::string subTaskId;
							int rejectFlag;
							std::string abandonRemark;
							int abandonFlag;
							std::string feedbackRemark;
							std::string _operator;
							std::vector<ITagSimpleUserMarkItemDTO::ITagSimpleUserMarkResultDTO> markResultList;
							int weight;
							std::string datasetId;
							std::string userMarkItemId;
							std::string markItemId;
							std::string dataId;
							int feedbackFlag;
							std::string state;
							std::string dataMeta;
							int mine;
							int fixedFlag;
						};
						TaskInfo taskInfo;
						SubUserTask subUserTask;
						std::vector<ITagSimpleUserMarkItemDTO> markItemList;
						OptionTemplate optionTemplate;
						SubTask subTask;
					};
					std::string totalMarkItemCount;
					ITagMarkableWorkTaskDTO iTagMarkableWorkTaskDTO;
					bool needPolling;
					std::string sampleRecordId;
					int hasNonCompleteTask;
				};


				PollingSampleMarkItemsResult();
				explicit PollingSampleMarkItemsResult(const std::string &payload);
				~PollingSampleMarkItemsResult();
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
#endif // !ALIBABACLOUD_ITAG_MODEL_POLLINGSAMPLEMARKITEMSRESULT_H_