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

#ifndef ALIBABACLOUD_PTS_MODEL_LISTENVSRESULT_H_
#define ALIBABACLOUD_PTS_MODEL_LISTENVSRESULT_H_

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
			class ALIBABACLOUD_PTS_EXPORT ListEnvsResult : public ServiceResult
			{
			public:
				struct Env
				{
					struct File
					{
						std::string fileName;
						long fileId;
						long fileSize;
						std::string md5;
						std::string fileOssAddress;
					};
					struct PropertiesItem
					{
						std::string description;
						std::string value;
						std::string name;
					};
					std::string envVersion;
					std::vector<std::string> runningScenes;
					long modifiedTime;
					long createTime;
					std::string envId;
					std::vector<std::string> relatedScenes;
					long usedCapacity;
					std::vector<Env::File> files;
					std::vector<Env::PropertiesItem> properties;
					std::string envName;
				};


				ListEnvsResult();
				explicit ListEnvsResult(const std::string &payload);
				~ListEnvsResult();
				long getTotalCount()const;
				std::string getMessage()const;
				int getPageSize()const;
				int getPageNumber()const;
				std::vector<Env> getEnvs()const;
				int getHttpStatusCode()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				long totalCount_;
				std::string message_;
				int pageSize_;
				int pageNumber_;
				std::vector<Env> envs_;
				int httpStatusCode_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_PTS_MODEL_LISTENVSRESULT_H_