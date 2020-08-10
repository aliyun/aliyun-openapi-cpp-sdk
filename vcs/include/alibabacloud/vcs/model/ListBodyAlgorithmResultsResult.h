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

#ifndef ALIBABACLOUD_VCS_MODEL_LISTBODYALGORITHMRESULTSRESULT_H_
#define ALIBABACLOUD_VCS_MODEL_LISTBODYALGORITHMRESULTSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/vcs/VcsExport.h>

namespace AlibabaCloud
{
	namespace Vcs
	{
		namespace Model
		{
			class ALIBABACLOUD_VCS_EXPORT ListBodyAlgorithmResultsResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct RecordsItem
					{
						std::string genderCode;
						std::string picUrlPath;
						std::string corpId;
						float rightBottomX;
						float rightBottomY;
						std::string targetPicUrlPath;
						std::string sourceId;
						std::string maxAge;
						float leftTopY;
						std::string capStyle;
						float leftTopX;
						std::string trousersStyle;
						std::string coatStyle;
						std::string minAge;
						std::string trousersLength;
						std::string personId;
						std::string coatLength;
						std::string shotTime;
						std::string coatColor;
						std::string trousersColor;
						std::string dataSourceId;
						std::string hairStyle;
					};
					int totalCount;
					int pageSize;
					int totalPage;
					int pageNumber;
					std::vector<RecordsItem> records;
				};


				ListBodyAlgorithmResultsResult();
				explicit ListBodyAlgorithmResultsResult(const std::string &payload);
				~ListBodyAlgorithmResultsResult();
				std::string getMessage()const;
				Data getData()const;
				std::string getCode()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				Data data_;
				std::string code_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VCS_MODEL_LISTBODYALGORITHMRESULTSRESULT_H_