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

#ifndef ALIBABACLOUD_ITAG_MODEL_PAGEVIEWMODELRESULT_H_
#define ALIBABACLOUD_ITAG_MODEL_PAGEVIEWMODELRESULT_H_

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
			class ALIBABACLOUD_ITAG_EXPORT PageViewModelResult : public ServiceResult
			{
			public:
				struct Result
				{
					struct ListItem
					{
						struct ModelConfig
						{
							long qpsLimit;
							std::string serviceCode;
							std::string contentType;
							std::string appId;
							std::string udfContent;
							std::string host;
							std::string token;
							std::string paiModelTarget;
							std::string requestType;
						};
						struct ParamConfig
						{
							struct PresetParamItem
							{
								std::string defaultValue;
								std::string type;
								std::string codec;
								std::string alias;
								std::string value;
								std::string name;
							};
							struct PostParamItem
							{
								std::string defaultValue;
								std::string type;
								std::string codec;
								std::string alias;
								std::string value;
								std::string name;
							};
							struct ResponseParamItem
							{
								std::string resultPath;
								std::string resultKey;
							};
							std::vector<PresetParamItem> presetParam;
							std::vector<PostParamItem> postParam;
							std::vector<ResponseParamItem> responseParam;
						};
						struct ModelExtendConfig
						{
							struct AsyncConfig
							{
								long modelId;
							};
							long postUdfModelId;
							std::string extra;
							AsyncConfig asyncConfig;
							long preUdfModelId;
							std::vector<std::string> aggModelIds;
						};
						struct Creator
						{
							std::string supplierId;
							std::string userName;
							std::string email;
							std::string accountNo;
							std::string supplierName;
							std::string userId;
							std::string pamNo;
							std::string accountType;
						};
						struct Modifier
						{
							std::string supplierId;
							std::string userName;
							std::string email;
							std::string accountNo;
							std::string supplierName;
							std::string userId;
							std::string pamNo;
							std::string accountType;
						};
						struct DemoModelConfig
						{
							long qpsLimit;
							std::string serviceCode;
							std::string contentType;
							std::string appId;
							std::string udfContent;
							std::string host;
							std::string token;
							std::string paiModelTarget;
							std::string requestType;
						};
						ModelExtendConfig modelExtendConfig;
						std::string tntInstId;
						std::string modelTag;
						std::string creatorId;
						std::string gmtModified;
						std::string creatorAccount;
						std::string udfType;
						Creator creator;
						ParamConfig paramConfig;
						std::string source;
						std::string name;
						std::string remark;
						ModelConfig modelConfig;
						std::string type;
						std::string gmtCreate;
						bool async;
						DemoModelConfig demoModelConfig;
						std::string id;
						Modifier modifier;
						std::string creatorName;
					};
					int pageNum;
					int pageSize;
					long totalPage;
					long total;
					std::vector<ListItem> list;
				};


				PageViewModelResult();
				explicit PageViewModelResult(const std::string &payload);
				~PageViewModelResult();
				std::string getMsg()const;
				long getRt()const;
				bool getSucc()const;
				std::string getHost()const;
				std::string getErrorCode()const;
				std::string getErrInfo()const;
				int getCode()const;
				Result getResult()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string msg_;
				long rt_;
				bool succ_;
				std::string host_;
				std::string errorCode_;
				std::string errInfo_;
				int code_;
				Result result_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ITAG_MODEL_PAGEVIEWMODELRESULT_H_