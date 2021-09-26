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

#ifndef ALIBABACLOUD_VS_MODEL_LISTOBJECTSRESULT_H_
#define ALIBABACLOUD_VS_MODEL_LISTOBJECTSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/vs/VsExport.h>

namespace AlibabaCloud
{
	namespace Vs
	{
		namespace Model
		{
			class ALIBABACLOUD_VS_EXPORT ListObjectsResult : public ServiceResult
			{
			public:
				struct Content
				{
					std::string lastModified;
					std::string eTag;
					long size;
					std::string storageClass;
					std::string key;
				};


				ListObjectsResult();
				explicit ListObjectsResult(const std::string &payload);
				~ListObjectsResult();
				std::vector<std::string> getCommonPrefixes()const;
				std::string getNextContinuationToken()const;
				std::string getContinuationToken()const;
				std::string getDelimiter()const;
				std::string getEncodingType()const;
				bool getIsTruncated()const;
				std::string getPrefix()const;
				std::string getMarker()const;
				std::vector<Content> getContents()const;
				std::string getBucketName()const;
				int getMaxKeys()const;
				int getKeyCount()const;
				std::string getNextMarker()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<std::string> commonPrefixes_;
				std::string nextContinuationToken_;
				std::string continuationToken_;
				std::string delimiter_;
				std::string encodingType_;
				bool isTruncated_;
				std::string prefix_;
				std::string marker_;
				std::vector<Content> contents_;
				std::string bucketName_;
				int maxKeys_;
				int keyCount_;
				std::string nextMarker_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VS_MODEL_LISTOBJECTSRESULT_H_