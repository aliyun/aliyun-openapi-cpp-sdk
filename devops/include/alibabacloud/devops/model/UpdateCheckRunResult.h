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

#ifndef ALIBABACLOUD_DEVOPS_MODEL_UPDATECHECKRUNRESULT_H_
#define ALIBABACLOUD_DEVOPS_MODEL_UPDATECHECKRUNRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/devops/DevopsExport.h>

namespace AlibabaCloud
{
	namespace Devops
	{
		namespace Model
		{
			class ALIBABACLOUD_DEVOPS_EXPORT UpdateCheckRunResult : public ServiceResult
			{
			public:
				struct Result
				{
					struct CheckSuite
					{
						long id;
					};
					struct Writer
					{
						std::string type;
						std::string logoUrl;
						std::string id;
						std::string slug;
						std::string name;
					};
					struct Output
					{
						struct Output_images
						{
							std::string alt;
							std::string imageUrl;
							std::string caption;
						};
						std::vector<Output_images> images;
						std::string title;
						std::string summary;
						std::string text;
					};
					struct Check_run_annotations
					{
						std::string path;
						long startLine;
						std::string message;
						std::string annotationLevel;
						long endLine;
						long endColumn;
						std::string title;
						long id;
						std::string rawDetails;
						long startColumn;
					};
					std::string status;
					std::string createdAt;
					std::string externalId;
					std::vector<Check_run_annotations> annotations;
					std::string updatedAt;
					std::string name;
					std::string headSha;
					CheckSuite checkSuite;
					Output output;
					std::string detailsUrl;
					std::string completedAt;
					long id;
					std::string startedAt;
					Writer writer;
					std::string conclusion;
				};


				UpdateCheckRunResult();
				explicit UpdateCheckRunResult(const std::string &payload);
				~UpdateCheckRunResult();
				std::string getRequestId()const;
				std::string getErrorCode()const;
				std::string getErrorMessage()const;
				bool getSuccess()const;
				Result getResult()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string requestId_;
				std::string errorCode_;
				std::string errorMessage_;
				bool success_;
				Result result_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DEVOPS_MODEL_UPDATECHECKRUNRESULT_H_