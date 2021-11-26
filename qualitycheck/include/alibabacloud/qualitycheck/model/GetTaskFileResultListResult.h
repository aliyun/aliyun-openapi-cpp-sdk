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

#ifndef ALIBABACLOUD_QUALITYCHECK_MODEL_GETTASKFILERESULTLISTRESULT_H_
#define ALIBABACLOUD_QUALITYCHECK_MODEL_GETTASKFILERESULTLISTRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/qualitycheck/QualitycheckExport.h>

namespace AlibabaCloud
{
	namespace Qualitycheck
	{
		namespace Model
		{
			class ALIBABACLOUD_QUALITYCHECK_EXPORT GetTaskFileResultListResult : public ServiceResult
			{
			public:
				struct TaskResultReviewInfo
				{
					int status;
					std::string taskId;
					bool isHitRule;
					std::string fileName;
					std::string fileMergeName;
					int checkNumber;
					std::string nextVid;
					float reviewAccuracyRate;
					std::string vid;
					std::string bucketName;
					int realViolationNumber;
					int hitNumber;
					std::string preVid;
					bool hitRule;
					int dataType;
					bool handTaskFile;
					int totalScore;
					std::vector<std::string> hitRuleSet;
				};


				GetTaskFileResultListResult();
				explicit GetTaskFileResultListResult(const std::string &payload);
				~GetTaskFileResultListResult();
				int getTotalCount()const;
				std::string getMessage()const;
				int getPageSize()const;
				int getDataSize()const;
				std::vector<TaskResultReviewInfo> getData()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				std::string message_;
				int pageSize_;
				int dataSize_;
				std::vector<TaskResultReviewInfo> data_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_QUALITYCHECK_MODEL_GETTASKFILERESULTLISTRESULT_H_