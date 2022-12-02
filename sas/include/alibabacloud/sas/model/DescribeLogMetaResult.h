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

#ifndef ALIBABACLOUD_SAS_MODEL_DESCRIBELOGMETARESULT_H_
#define ALIBABACLOUD_SAS_MODEL_DESCRIBELOGMETARESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/sas/SasExport.h>

namespace AlibabaCloud
{
	namespace Sas
	{
		namespace Model
		{
			class ALIBABACLOUD_SAS_EXPORT DescribeLogMetaResult : public ServiceResult
			{
			public:
				struct LogMeta
				{
					std::string status;
					std::string category;
					std::string logStore;
					std::string configLogStoreDesc;
					std::string userLogStore;
					int ttl;
					std::string configLogStore;
					int hotTtl;
					std::string project;
					std::string userProject;
					std::string userRegion;
					std::string logDesc;
					std::string topic;
				};


				DescribeLogMetaResult();
				explicit DescribeLogMetaResult(const std::string &payload);
				~DescribeLogMetaResult();
				int getTotalCount()const;
				std::vector<LogMeta> getLogMetaList()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				std::vector<LogMeta> logMetaList_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SAS_MODEL_DESCRIBELOGMETARESULT_H_