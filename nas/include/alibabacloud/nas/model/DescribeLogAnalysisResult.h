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

#ifndef ALIBABACLOUD_NAS_MODEL_DESCRIBELOGANALYSISRESULT_H_
#define ALIBABACLOUD_NAS_MODEL_DESCRIBELOGANALYSISRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/nas/NASExport.h>

namespace AlibabaCloud
{
	namespace NAS
	{
		namespace Model
		{
			class ALIBABACLOUD_NAS_EXPORT DescribeLogAnalysisResult : public ServiceResult
			{
			public:
				struct Analysis
				{
					struct MetaValue
					{
						std::string project;
						std::string logstore;
						std::string region;
						std::string roleArn;
					};
					MetaValue metaValue;
					std::string metaKey;
				};


				DescribeLogAnalysisResult();
				explicit DescribeLogAnalysisResult(const std::string &payload);
				~DescribeLogAnalysisResult();
				int getTotalCount()const;
				int getPageSize()const;
				int getPageNumber()const;
				std::vector<Analysis> getAnalyses()const;
				std::string getCode()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				int pageSize_;
				int pageNumber_;
				std::vector<Analysis> analyses_;
				std::string code_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_NAS_MODEL_DESCRIBELOGANALYSISRESULT_H_