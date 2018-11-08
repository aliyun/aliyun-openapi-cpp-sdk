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

#ifndef ALIBABACLOUD_CSB_MODEL_GETSERVICERESULT_H_
#define ALIBABACLOUD_CSB_MODEL_GETSERVICERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/csb/CSBExport.h>

namespace AlibabaCloud
{
	namespace CSB
	{
		namespace Model
		{
			class ALIBABACLOUD_CSB_EXPORT GetServiceResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct Service
					{
						struct RouteConf
						{
							struct ImportConf
							{
								struct InputParameter
								{
									int catType;
									bool optional;
									int extType;
									int mapStyle;
									std::string originalName;
									std::string targetName;
									std::string passMethod;
									int depth;
									std::string paramType;
								};
								struct OutputParameter
								{
									int catType;
									bool optional;
									int extType;
									int mapStyle;
									std::string originalName;
									std::string targetName;
									std::string passMethod;
									int depth;
									std::string paramType;
								};
								std::vector<OutputParameter> outputParameterMap;
								std::string accessEndpointJSON;
								std::string provideType;
								std::vector<InputParameter> inputParameterMap;
							};
							struct ImportConfs
							{
								struct InputParameter3
								{
									int catType;
									bool optional;
									int extType;
									int mapStyle;
									std::string originalName;
									std::string targetName;
									std::string passMethod;
									int depth;
									std::string paramType;
								};
								struct OutputParameter4
								{
									int catType;
									bool optional;
									int extType;
									int mapStyle;
									std::string originalName;
									std::string targetName;
									std::string passMethod;
									int depth;
									std::string paramType;
								};
								std::vector<OutputParameter4> outputParameterMap2;
								std::string accessEndpointJSON;
								std::string provideType;
								std::vector<InputParameter3> inputParameterMap1;
							};
							ImportConfs importConfs;
							ImportConf importConf;
							std::string serviceRouteStrategy;
						};
						struct ServiceVersion
						{
							int status;
							std::string statisticName;
							bool sSL;
							bool active;
							std::string scope;
							bool allVisiable;
							bool skipAuth;
							bool ottFlag;
							std::string serviceVersion;
							std::string oldVersion;
							bool validConsumeTypes;
							long id;
							bool validProvideType;
						};
						struct VisiableGroup
						{
							int status;
							long modifiedTime;
							std::string userId;
							long createTime;
							long id;
							long groupId;
							long serviceId;
						};
						std::string ipWhiteStr;
						RouteConf routeConf;
						std::string projectName;
						std::string approveUserId;
						std::string serviceOpenRestfulPath;
						long modifiedTime;
						std::string ownerId;
						std::string consumeTypesJSON;
						bool skipAuth;
						std::vector<ServiceVersion> serviceVersionsList;
						bool ottFlag;
						std::string interfaceName;
						std::string casTargets;
						int status;
						std::string ipBlackStr;
						std::string statisticName;
						std::string errDefJSON;
						std::string openRestfulPath;
						std::string policyHandler;
						long createTime;
						std::vector<VisiableGroup> visiableGroupList;
						long csbId;
						long projectId;
						std::string principalName;
						std::vector<std::string> consumeTypes;
						std::string accessParamsJSON;
						bool sSL;
						bool active;
						std::string serviceProviderType;
						std::string scope;
						bool allVisiable;
						std::string serviceName;
						std::string alias;
						std::string provideType;
						std::string routeConfJson;
						std::string userId;
						std::string serviceVersion;
						std::string oldVersion;
						bool validConsumeTypes;
						long id;
						std::string modelVersion;
						bool validProvideType;
						std::vector<std::string> casServTargets;
					};
					Service service;
				};


				GetServiceResult();
				explicit GetServiceResult(const std::string &payload);
				~GetServiceResult();
				std::string getMessage()const;
				Data getData()const;
				int getCode()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				Data data_;
				int code_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CSB_MODEL_GETSERVICERESULT_H_