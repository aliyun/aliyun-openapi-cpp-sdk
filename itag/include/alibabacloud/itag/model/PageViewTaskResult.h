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

#ifndef ALIBABACLOUD_ITAG_MODEL_PAGEVIEWTASKRESULT_H_
#define ALIBABACLOUD_ITAG_MODEL_PAGEVIEWTASKRESULT_H_

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
			class ALIBABACLOUD_ITAG_EXPORT PageViewTaskResult : public ServiceResult
			{
			public:
				struct Result
				{
					struct ITagTaskDTO
					{
						struct OptionTemplateDTO
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
							struct Creator3
							{
								std::string userName;
								std::string accountNo;
								std::string userId;
								std::string accountType;
							};
							struct Modifier4
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
									std::vector<std::string> children5;
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
							std::string name;
							std::string exif;
							std::string type;
							std::string gmtCreate;
							std::vector<QuestionConfigDTO> questionConfigs;
							std::vector<std::string> tags2;
							std::string id;
							Creator3 creator3;
							std::string sharedMode;
							Modifier4 modifier4;
						};
						struct TaskTemplateConfig
						{
							struct RobotConfig6
							{
								struct EffectStep7
								{
									struct ProcessConfig14
									{
										std::vector<std::string> relateColumn15;
									};
									ProcessConfig14 processConfig14;
									bool preProcess;
									bool label;
									bool preLabel;
								};
								struct ModelServiceConfig9
								{
									struct ModelServiceConfig$PostParamPair12
									{
										std::string value;
										std::string key;
									};
									struct ModelServiceConfig$ResultMappingPair13
									{
										std::string questionId;
										std::string markTitle;
										std::string resultKey;
									};
									std::string serviceName;
									std::vector<ModelServiceConfig9::ModelServiceConfig$ResultMappingPair13> resultMappings11;
									std::vector<ModelServiceConfig9::ModelServiceConfig$PostParamPair12> postParams10;
									std::string serviceId;
								};
								std::vector<ModelServiceConfig9> modelServiceConfigs8;
								std::string source;
								EffectStep7 effectStep7;
							};
							RobotConfig6 robotConfig6;
							std::string exif;
							std::vector<std::string> selectQuestions;
							std::string templateOptionMap;
							std::string templateRelationId;
							std::string resourceKey;
						};
						struct BizInfo
						{
							std::string bizClassify;
							std::string bizNo;
							std::string bizCode;
						};
						struct AssignConfig
						{
							std::string assignField;
							int assignCount;
							int assignSubTaskCount;
							std::string assignType;
						};
						struct NoticeConfig
						{
							std::string dingHook;
							std::vector<std::string> listenActions;
							std::string subTaskAlertGap;
						};
						struct ResultCallbackConfig
						{
							std::string exif;
							std::string retMsgMode;
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
						struct TaskDatasetProxyRelation
						{
							std::string exif;
							std::string sourceBizId;
							std::string datasetType;
							std::string source;
							std::string datasetId;
						};
						struct ITagSimpleUserVO
						{
							std::string userName;
							std::string accountNo;
							std::string userId;
							std::string accountType;
						};
						struct ITagTaskWorkflowConfig
						{
							struct ITagSimpleUserVO1
							{
								std::string userName;
								std::string accountNo;
								std::string userId;
								std::string accountType;
							};
							struct ITagSimpleUserGroupVO
							{
								std::string groupName;
								std::string groupId;
							};
							std::string exif;
							std::string nodeName;
							std::vector<ITagTaskWorkflowConfig::ITagSimpleUserGroupVO> groups;
							std::vector<ITagTaskWorkflowConfig::ITagSimpleUserVO1> users;
						};
						std::string taskId;
						bool allowAppendData;
						std::string relateTaskConfig;
						std::string runMsg;
						std::string gmtModified;
						ResultCallbackConfig resultCallbackConfig;
						Creator creator;
						std::string remark;
						bool archived;
						std::string exif;
						std::vector<ITagTaskDTO::ITagTaskWorkflowConfig> taskWorkFlow;
						std::string archivedInfos;
						std::string taskType;
						OptionTemplateDTO optionTemplateDTO;
						std::string stage;
						Modifier modifier;
						std::string templateId;
						std::vector<std::string> tags;
						AssignConfig assignConfig;
						int status;
						BizInfo bizInfo;
						std::string tntInstId;
						std::string channel;
						long projectId;
						std::string tntInstName;
						std::string voteConfigs;
						NoticeConfig noticeConfig;
						std::vector<std::string> workflowNodes;
						TaskTemplateConfig taskTemplateConfig;
						std::vector<ITagTaskDTO::TaskDatasetProxyRelation> datasetProxyRelations;
						int alertTime;
						std::string mineConfigs;
						int safetyLevel;
						std::string gmtCreate;
						std::string taskName;
						std::vector<ITagTaskDTO::ITagSimpleUserVO> admins;
						std::vector<std::string> supportDownloadTypes;
					};
					long pageNum;
					long pageSize;
					long totalPage;
					long total;
					std::vector<ITagTaskDTO> list;
				};


				PageViewTaskResult();
				explicit PageViewTaskResult(const std::string &payload);
				~PageViewTaskResult();
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
#endif // !ALIBABACLOUD_ITAG_MODEL_PAGEVIEWTASKRESULT_H_