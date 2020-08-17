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

#ifndef ALIBABACLOUD_VCS_MODEL_LISTEVENTALGORITHMDETAILSRESULT_H_
#define ALIBABACLOUD_VCS_MODEL_LISTEVENTALGORITHMDETAILSRESULT_H_

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
			class ALIBABACLOUD_VCS_EXPORT ListEventAlgorithmDetailsResult : public ServiceResult
			{
			public:
				struct Datas
				{
					std::string eventValue;
					std::string picUrlPath;
					std::string corpId;
					std::string eventType;
					std::string rightBottomX;
					std::string rightBottomY;
					std::string targetPicUrlPath;
					std::string sourceId;
					std::string leftTopY;
					std::string leftTopX;
					std::string extendValue;
					std::string pointY;
					std::string pointX;
					std::string shotTime;
					std::string recordId;
					std::string faceCount;
					std::string dataSourceId;
					std::string extraExtendValue;
				};


				ListEventAlgorithmDetailsResult();
				explicit ListEventAlgorithmDetailsResult(const std::string &payload);
				~ListEventAlgorithmDetailsResult();
				int getTotalCount()const;
				std::string getMessage()const;
				int getPageSize()const;
				int getPageNumber()const;
				std::vector<Datas> getData()const;
				std::string getCode()const;
				std::string getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				std::string message_;
				int pageSize_;
				int pageNumber_;
				std::vector<Datas> data_;
				std::string code_;
				std::string success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VCS_MODEL_LISTEVENTALGORITHMDETAILSRESULT_H_