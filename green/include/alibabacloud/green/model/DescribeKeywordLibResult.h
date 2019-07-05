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

#ifndef ALIBABACLOUD_GREEN_MODEL_DESCRIBEKEYWORDLIBRESULT_H_
#define ALIBABACLOUD_GREEN_MODEL_DESCRIBEKEYWORDLIBRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/green/GreenExport.h>

namespace AlibabaCloud
{
	namespace Green
	{
		namespace Model
		{
			class ALIBABACLOUD_GREEN_EXPORT DescribeKeywordLibResult : public ServiceResult
			{
			public:
				struct KeywordLib
				{
					std::string matchMode;
					std::string category;
					std::vector<std::string> bizTypes;
					std::string resourceType;
					int count;
					std::string libType;
					std::string code;
					std::string source;
					std::string name;
					std::string serviceModule;
					std::string modifiedTime;
					std::string language;
					bool enable;
					int id;
				};


				DescribeKeywordLibResult();
				explicit DescribeKeywordLibResult(const std::string &payload);
				~DescribeKeywordLibResult();
				std::vector<KeywordLib> getKeywordLibList()const;
				int getTotalCount()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<KeywordLib> keywordLibList_;
				int totalCount_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_GREEN_MODEL_DESCRIBEKEYWORDLIBRESULT_H_