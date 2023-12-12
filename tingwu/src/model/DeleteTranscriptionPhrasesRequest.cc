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

#include <alibabacloud/tingwu/model/DeleteTranscriptionPhrasesRequest.h>

using AlibabaCloud::Tingwu::Model::DeleteTranscriptionPhrasesRequest;

DeleteTranscriptionPhrasesRequest::DeleteTranscriptionPhrasesRequest()
    : RoaServiceRequest("tingwu", "2023-09-30") {
  setResourcePath("/openapi/tingwu/v2/resources/phrases/[PhraseId]"};
  setMethod(HttpRequest::Method::Delete);
}

DeleteTranscriptionPhrasesRequest::~DeleteTranscriptionPhrasesRequest() {}

std::string DeleteTranscriptionPhrasesRequest::getPhraseId() const {
  return phraseId_;
}

void DeleteTranscriptionPhrasesRequest::setPhraseId(const std::string &phraseId) {
  phraseId_ = phraseId;
  setParameter(std::string("PhraseId"), phraseId);
}

