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

#ifndef ALIBABACLOUD_ITAG_MODEL_GETOPTIONTEMPLATERESULT_H_
#define ALIBABACLOUD_ITAG_MODEL_GETOPTIONTEMPLATERESULT_H_

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
			class ALIBABACLOUD_ITAG_EXPORT GetOptionTemplateResult : public ServiceResult
			{
			public:
				struct Result
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


				GetOptionTemplateResult();
				explicit GetOptionTemplateResult(const std::string &payload);
				~GetOptionTemplateResult();
				std::string getMsg()const;
				bool getSucc()const;
				std::string getErrorCode()const;
				std::string getErrInfo()const;
				int getCode()const;
				Result getResult()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string msg_;
				bool succ_;
				std::string errorCode_;
				std::string errInfo_;
				int code_;
				Result result_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ITAG_MODEL_GETOPTIONTEMPLATERESULT_H_