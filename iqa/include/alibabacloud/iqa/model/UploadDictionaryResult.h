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

#ifndef ALIBABACLOUD_IQA_MODEL_UPLOADDICTIONARYRESULT_H_
#define ALIBABACLOUD_IQA_MODEL_UPLOADDICTIONARYRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/iqa/IqaExport.h>

namespace AlibabaCloud
{
	namespace Iqa
	{
		namespace Model
		{
			class ALIBABACLOUD_IQA_EXPORT UploadDictionaryResult : public ServiceResult
			{
			public:


				UploadDictionaryResult();
				explicit UploadDictionaryResult(const std::string &payload);
				~UploadDictionaryResult();
				int getTotalCount()const;
				std::string getProjectId()const;
				int getFileDataCount()const;
				int getJsonDataCount()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				std::string projectId_;
				int fileDataCount_;
				int jsonDataCount_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_IQA_MODEL_UPLOADDICTIONARYRESULT_H_