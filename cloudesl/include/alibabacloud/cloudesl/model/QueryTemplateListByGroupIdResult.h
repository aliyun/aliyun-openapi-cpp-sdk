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

#ifndef ALIBABACLOUD_CLOUDESL_MODEL_QUERYTEMPLATELISTBYGROUPIDRESULT_H_
#define ALIBABACLOUD_CLOUDESL_MODEL_QUERYTEMPLATELISTBYGROUPIDRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/cloudesl/CloudeslExport.h>

namespace AlibabaCloud
{
	namespace Cloudesl
	{
		namespace Model
		{
			class ALIBABACLOUD_CLOUDESL_EXPORT QueryTemplateListByGroupIdResult : public ServiceResult
			{
			public:
				struct _Template
				{
					std::string templateVersion;
					std::string basePicture;
					std::string scene;
					std::string templateSceneId;
					std::string groupId;
					std::string brand;
					bool relation;
					std::string layout;
					std::string templateName;
					long height;
					std::string eslSize;
					std::string eslType;
					long width;
					std::string templateId;
				};


				QueryTemplateListByGroupIdResult();
				explicit QueryTemplateListByGroupIdResult(const std::string &payload);
				~QueryTemplateListByGroupIdResult();
				int getTotalCount()const;
				std::vector<_Template> getTemplateList()const;
				std::string getMessage()const;
				int getPageSize()const;
				int getPageNumber()const;
				std::string getDynamicCode()const;
				std::string getErrorCode()const;
				std::string getDynamicMessage()const;
				std::string getErrorMessage()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				std::vector<_Template> templateList_;
				std::string message_;
				int pageSize_;
				int pageNumber_;
				std::string dynamicCode_;
				std::string errorCode_;
				std::string dynamicMessage_;
				std::string errorMessage_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CLOUDESL_MODEL_QUERYTEMPLATELISTBYGROUPIDRESULT_H_