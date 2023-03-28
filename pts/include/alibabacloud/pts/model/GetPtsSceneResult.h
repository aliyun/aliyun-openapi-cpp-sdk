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

#ifndef ALIBABACLOUD_PTS_MODEL_GETPTSSCENERESULT_H_
#define ALIBABACLOUD_PTS_MODEL_GETPTSSCENERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/pts/PTSExport.h>

namespace AlibabaCloud
{
	namespace PTS
	{
		namespace Model
		{
			class ALIBABACLOUD_PTS_EXPORT GetPtsSceneResult : public ServiceResult
			{
			public:
				struct Scene
				{
					struct LoadConfig
					{
						struct Configuration
						{
							int allRpsBegin;
							int allRpsLimit;
							int allConcurrencyBegin;
							int allConcurrencyLimit;
						};
						struct VpcLoadConfig
						{
							std::string vpcId;
							std::string vSwitchId;
							std::string securityGroupId;
							std::string regionId;
						};
						struct ApiLoadConfig
						{
							int rpsLimit;
							int rpsBegin;
							std::string apiId;
						};
						struct RelationLoadConfig
						{
							int concurrencyLimit;
							std::string relationId;
							int concurrencyBegin;
						};
						bool autoStep;
						int agentCount;
						Configuration configuration;
						int increment;
						std::string testMode;
						int maxRunningTime;
						int keepTime;
						std::vector<ApiLoadConfig> apiLoadConfigList;
						VpcLoadConfig vpcLoadConfig;
						std::vector<RelationLoadConfig> relationLoadConfigList;
					};
					struct AdvanceSetting
					{
						struct DomainBinding
						{
							std::string domain;
							std::vector<std::string> ips;
						};
						int logRate;
						std::vector<DomainBinding> domainBindingList;
						int connectionTimeoutInSecond;
						std::string successCode;
					};
					struct FileParameter
					{
						std::string fileName;
						std::string fileOssAddress;
					};
					struct Relation
					{
						struct FileParameterExplain
						{
							bool baseFile;
							bool cycleOnce;
							std::string fileParamName;
							std::string fileName;
						};
						struct Api
						{
							struct Body
							{
								std::string contentType;
								std::string bodyValue;
							};
							struct CheckPoint
							{
								std::string expectValue;
								std::string checkType;
								std::string _operator;
								std::string checkPoint;
							};
							struct Header
							{
								std::string headerValue;
								std::string headerName;
							};
							struct Export
							{
								std::string exportType;
								std::string exportName;
								std::string exportValue;
								std::string count;
							};
							std::vector<Api::Export> exportList;
							std::string apiName;
							std::vector<Api::Header> headerList;
							int redirectCountLimit;
							std::vector<Api::CheckPoint> checkPointList;
							std::string method;
							int timeoutInSecond;
							Body body;
							std::string apiId;
							std::string url;
						};
						std::vector<Relation::Api> apiList;
						std::string relationId;
						std::string relationName;
						std::vector<Relation::FileParameterExplain> fileParameterExplainList;
					};
					struct GlobalParameter
					{
						std::string paramValue;
						std::string paramName;
					};
					struct Header1
					{
						std::string value;
						std::string name;
					};
					std::string status;
					std::string sceneId;
					AdvanceSetting advanceSetting;
					std::vector<Relation> relationList;
					std::string modifiedTime;
					std::string sceneName;
					std::vector<Header1> headers;
					LoadConfig loadConfig;
					std::string createTime;
					std::vector<GlobalParameter> globalParameterList;
					std::vector<FileParameter> fileParameterList;
				};


				GetPtsSceneResult();
				explicit GetPtsSceneResult(const std::string &payload);
				~GetPtsSceneResult();
				std::string getMessage()const;
				int getHttpStatusCode()const;
				Scene getScene()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				int httpStatusCode_;
				Scene scene_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_PTS_MODEL_GETPTSSCENERESULT_H_