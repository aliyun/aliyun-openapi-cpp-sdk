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

#ifndef ALIBABACLOUD_ITAG_MODEL_GETDATASETPROXYRESULT_H_
#define ALIBABACLOUD_ITAG_MODEL_GETDATASETPROXYRESULT_H_

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
			class ALIBABACLOUD_ITAG_EXPORT GetDatasetProxyResult : public ServiceResult
			{
			public:
				struct Result
				{
					struct Schema
					{
						struct ITagDatasetField
						{
							std::string exif;
							std::string type;
							std::string classify;
							std::string alias;
							bool sensitive;
							bool sortKey;
							std::string fieldClassify;
							std::string fieldName;
							std::string fieldDesc;
							std::string fieldType;
						};
						std::vector<ITagDatasetField> fields;
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
					int status;
					std::string description;
					std::vector<std::string> fieldTypes;
					std::string proxyTarget;
					std::string tntInstId;
					Schema schema;
					std::string runMsg;
					std::string gmtModified;
					std::string sortKey;
					Creator creator;
					std::string source;
					std::string name;
					int safetyLevel;
					std::string gmtCreate;
					std::string sourceBizId;
					long totalNum;
					std::string id;
					std::string proxyConfigs;
					std::string sharedMode;
					Modifier modifier;
				};


				GetDatasetProxyResult();
				explicit GetDatasetProxyResult(const std::string &payload);
				~GetDatasetProxyResult();
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
#endif // !ALIBABACLOUD_ITAG_MODEL_GETDATASETPROXYRESULT_H_